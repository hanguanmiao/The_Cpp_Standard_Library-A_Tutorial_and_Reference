#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>
#include <vector>

int main()
{
    using namespace std;

    vector<string> coll;

    copy(istream_iterator<string>(cin), istream_iterator<string>(), back_inserter(coll));
    sort(coll.begin(), coll.end());
    unique_copy(coll.begin(), coll.end(), ostream_iterator<string>(cout, "\n"));

    return 0;
}
