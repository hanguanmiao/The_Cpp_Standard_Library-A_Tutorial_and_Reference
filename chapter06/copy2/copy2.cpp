#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <deque>
#include <list>
#include <iterator>


int main()
{
    using namespace std;
    list<int> coll1 = {1,2,3,4,5,6,7,8,9};

    vector<int> coll2;
    copy(coll1.begin(), coll1.end(), back_inserter(coll2));

    deque<int> coll3;
    copy(coll1.begin(), coll1.end(), front_inserter(coll3));

    set<int> coll4;
    copy(coll1.begin(), coll1.end(), inserter(coll4, coll4.begin()));

    return 0;
}
