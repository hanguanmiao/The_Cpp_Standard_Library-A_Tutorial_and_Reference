#include "printtuple.hpp"

int main()
{
    std::tuple<int,float,std::string> t(77,1.1,"more light");
    std::cout << "io: " << t << std::endl;
    return 0;
}
