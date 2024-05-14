#include <iostream>
#include <iterator>
#include <set>
#include <algorithm>


int main()
{
    using namespace std;

    set<int> coll{1,2,3,4,5,6,7,8,9};

    copy(coll.cbegin(), coll.cend(), ostream_iterator<int>(cout, " "));
    cout << endl;

    int num = coll.erase(3);
    cout << "number of removed elements: " << num << endl;

    copy(coll.cbegin(), coll.cend(), ostream_iterator<int>(cout, " "));
    cout << endl;
    return 0;
}
