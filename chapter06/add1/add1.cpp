#include <iostream>
#include <list>
#include <algorithm>
#include "print.hpp"

class AddValue{
private:
    int theValue;

public:
    AddValue(int v): theValue(v) {}
    void operator()(int &elem){
        elem += theValue;
    }
};

int main()
{
    using namespace std;

    list<int> coll;
    for(int i=1; i<=9; ++i){
        coll.push_back(i);
    }
    PRINT_ELEMENTS(coll, "initilized:                   ");

    for_each(coll.begin(), coll.end(), AddValue(10));
    PRINT_ELEMENTS(coll, "after adding 10:              ");

    for_each(coll.begin(), coll.end(), AddValue(*coll.begin()));
    PRINT_ELEMENTS(coll, "after adding first element:   ");

    return 0;
}
