#include <iostream>
#include <deque>
#include <algorithm>


int main()
{
    using namespace std;

    deque<int> coll ={1,3,9,5,13,7,11,2,17};

    int x=5;
    int y=12;
    auto pos = find_if(coll.cbegin(),coll.cend(),
                       [=](int i){ return i>x && i<y;});

    cout << "first elem >5 and <12: " << *pos << endl;
    return 0;
}
