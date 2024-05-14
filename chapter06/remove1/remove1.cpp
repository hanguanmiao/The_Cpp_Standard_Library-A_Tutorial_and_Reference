#include <iostream>
#include <algorithm>
#include <iterator>
#include <list>


int main()
{
    using namespace std;

    list<int> coll;
    for(int i=0; i<=6; ++i){
        coll.push_front(i);
        coll.push_back(i);
    }

    copy(coll.cbegin(), coll.cend(), ostream_iterator<int>(cout, " "));
    cout << endl;

    remove(coll.begin(), coll.end(), 3);
    copy(coll.cbegin(), coll.cend(), ostream_iterator<int>(cout, " "));
    cout << endl;

    return 0;
}
