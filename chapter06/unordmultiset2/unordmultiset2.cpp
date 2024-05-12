#include <iostream>
#include <unordered_set>

int main()
{
    using namespace std;

    unordered_multiset<int> coll;

    coll.insert({1,3,5,7,11,13,17,19,23,27,1});

    for(auto elem : coll){
        cout << elem << ',';
    }
    cout  << endl;

    coll.insert(25);
    for(auto elem : coll){
        cout << elem << ',';
    }
    cout  << endl;
    return 0;
}
