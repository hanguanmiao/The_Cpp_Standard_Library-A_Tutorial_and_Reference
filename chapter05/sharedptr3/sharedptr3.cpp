#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include <iostream>
#include <memory>
#include <string>
#include <cstring>


class ShareMemoryDetacher{
public:
    void operator()(int *){
        std::cout<<"unlink /tmp1234" << std::endl;
        if(shm_unlink("/tmp1234") != 0){
            std::cerr << "OOPS: shm_unlink() failed" << std::endl;
        }
    }
};

std::shared_ptr<int> getSharedInitMemory(int num){
    void *mem;
    int shmfd = shm_open("/tmp1234", O_CREAT|O_RDWR, S_IRWXU|S_IRWXG);
    if(shmfd<0){
        throw std::string(std::strerror(errno));
    }
    if(ftruncate(shmfd, num*sizeof(int)) == -1){
        throw std::string(std::strerror(errno));
    }
    mem = mmap(nullptr, num*sizeof(int), PROT_READ|PROT_WRITE, MAP_SHARED, shmfd, 0);
    if(mem==MAP_FAILED){
        throw std::string(std::strerror(errno));
    }

    return std::shared_ptr<int>(static_cast<int*>(mem), ShareMemoryDetacher());
}


int main()
{
    std::shared_ptr<int>smp(getSharedInitMemory(100));

    for(int i=0;i<100;++i){
        smp.get()[i] = i*42;
    }

    std::cout << "<return>" << std::endl;
    std::cin.get();

    smp.reset();

    return 0;
}
