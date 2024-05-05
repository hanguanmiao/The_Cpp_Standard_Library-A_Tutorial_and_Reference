#include<sys/types.h>
#include<dirent.h>
#include <cstring>
#include <iostream>
#include <memory>
#include <string>

class DirCloser{
public:
    void operator()(DIR *dp){
        if(closedir(dp) != 0){
            std::cerr << "OOPS: closedir() failed: " << std::strerror(errno) << std::endl;
        }
    }
};


int main()
{
    std::unique_ptr<DIR, DirCloser> pDir(opendir(".."));

    struct dirent *dp;
    while((dp=readdir(pDir.get())) != nullptr){
        std::string filename(dp->d_name);
        std::cout << "process " << filename << std::endl;
    }

    return 0;
}
