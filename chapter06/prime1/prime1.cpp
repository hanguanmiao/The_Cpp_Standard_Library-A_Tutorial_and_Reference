#include <iostream>
#include <cstdlib>
#include <list>
#include <algorithm>

bool isPrime(int number){
    number = abs(number);

    if(0 == number || 1 == number){
        return false;
    }

    int divisor;
    for(divisor=number/2; number%divisor != 0; --divisor){
        //nothing;
    }
    if(1 == divisor) return true;
    return false;
}

int main()
{
    using namespace std;

    list<int> coll;
    for(int i=24; i<=30; ++i){
        coll.push_back(i);
    }

    auto pos = find_if(coll.cbegin(), coll.cend(), isPrime);
    if(pos != coll.end()){
        cout << *pos << " is first prime number found" << endl;
    }else{
        cout << "no prime number found" << endl;
    }

    return 0;
}
