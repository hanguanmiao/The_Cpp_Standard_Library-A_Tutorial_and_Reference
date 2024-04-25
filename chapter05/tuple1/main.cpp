#include <iostream>
#include <complex>
#include <tuple>

int main()
{
    std::tuple<std::string,int,int,std::complex<double>>t;

    std::tuple<int,float,std::string> t1(41,6.3,"nico");

    std::cout<<std::get<0>(t1)<<" " <<std::get<1>(t1)<<" "<<std::get<2>(t1)<<" "<<std::endl;

    auto t2 = std::make_tuple(22,24,"nico");

    std::get<1>(t1) = std::get<1>(t2);

    if(t1<t2){
        t1=t2;
    }

    return 0;
}
