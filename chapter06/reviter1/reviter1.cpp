#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main()
{
    using namespace std;
    vector<int> coll;

    for(int i=1; i<=9; ++i){
        coll.push_back(i);
    }

    copy(coll.crbegin(), coll.crend(), ostream_iterator<int>(cout, " "));
    cout<< endl;

    return 0;
}
