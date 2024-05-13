#include <iostream>
#include <vector>
#include <algorithm>


int main()
{
    using namespace std;

    vector<int> coll = {2,5,4,1,6,3};

    auto minpos = min_element(coll.begin(), coll.end());
    cout << "min: " << *minpos << endl;
    auto maxpos = max_element(coll.begin(), coll.end());
    cout << "max: " << *maxpos << endl;

    sort(coll.begin(), coll.end());

    auto pos3 = find(coll.begin(), coll.end(), 3);
    reverse(pos3, coll.end());

    for(auto elem : coll){
        cout << elem << " ";
    }
    cout << endl;
    return 0;
}
