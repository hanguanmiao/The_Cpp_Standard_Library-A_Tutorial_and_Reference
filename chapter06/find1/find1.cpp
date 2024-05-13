#include <iostream>
#include <algorithm>
#include <list>

int main()
{
    using namespace std;

    list<int> coll;
    for(int i=20; i<=40; ++i){
        coll.push_back(i);
    }

    auto pos3 = find(coll.begin(), coll.end(), 3);
    reverse(pos3, coll.end());

    auto pos25 = find(coll.begin(), coll.end(), 25);
    auto pos35 = find(coll.begin(), coll.end(), 35);

    cout << "max: " << *max_element(pos25, pos35) << endl;

    cout << "max: " << *max_element(pos25, ++pos35) << endl;
    return 0;
}
