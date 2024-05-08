#include <iostream>
#include <ratio>

int main()
{
    using namespace std;

    typedef ratio<5,3> FiveThirds;
    cout << FiveThirds::num << "/" << FiveThirds::den << endl;

    typedef ratio<25,15> AlsoFiveThirds;
    cout << AlsoFiveThirds::num << "/" << FiveThirds::den << endl;

    ratio<42,42> one;
    cout << one.num << "/" << one.den << endl;

    ratio<0> zero;
    cout << zero.num << "/" << zero.den << endl;

    typedef ratio<7,-3> Neg;
    cout << Neg::num << "/" << Neg::den << endl;

    return 0;
}
