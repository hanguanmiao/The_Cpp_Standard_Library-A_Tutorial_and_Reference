#include <iostream>
#include <chrono>

template <typename C>
void printClockData(){
    std::cout << "- precision: ";
    typedef typename C::period P;
    if(std::ratio_less_equal<P,std::milli>::value){
        typedef typename std::ratio_multiply<P,std::kilo>::type TT;
        std::cout << std::fixed << double(TT::num)/TT::den << " milliseconds" << std::endl;
    }else{
        std::cout << std::fixed << double(P::num)/P::den << " seconds" << std::endl;
    }
    std::cout << "- is_steady:  " << std::boolalpha << C::is_steady << std::endl;
}

int main()
{
    using namespace std;

    cout << "system_clock: " << endl;
    printClockData<chrono::system_clock>();
    cout << "\nhigh_resolution_clock: " << endl;
    printClockData<chrono::high_resolution_clock>();
    cout <<"\nsteady_clock: " << endl;
    printClockData<chrono::steady_clock>();

    return 0;
}
