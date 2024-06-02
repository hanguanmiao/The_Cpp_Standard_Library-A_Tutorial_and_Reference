#include <iostream>
#include <array>
#include <numeric>
#include <algorithm>
#include <functional>
#include "print.hpp"

int main()
{
    using namespace std;

    array<int,10> a = {11,22,33,44};
    PRINT_ELEMENTS(a);

    a.back() = 999999;
    a[a.size()-2] = 42;
    PRINT_ELEMENTS(a);

    cout << "sum: " << accumulate(a.cbegin(), a.cend(), 0) << endl;

    transform(a.cbegin(),a.cend(),a.begin(),negate<int>());
    PRINT_ELEMENTS(a);

    return 0;
}
