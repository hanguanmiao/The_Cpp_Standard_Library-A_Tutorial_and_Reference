#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <iterator>
#include "print.hpp"

int square(int value){
    return value * value;
}

int main()
{
    using namespace std;

    set<int> coll1;
    vector<int> coll2;

    for(int i=1; i<=9; ++i){
        coll1.insert(i);
    }
    PRINT_ELEMENTS(coll1, "initialized: ");

    transform(coll1.cbegin(), coll1.cend(), back_inserter(coll2), square);
    PRINT_ELEMENTS(coll2, "squared:     ");
    return 0;
}
