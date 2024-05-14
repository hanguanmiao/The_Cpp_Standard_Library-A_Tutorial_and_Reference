#include <iostream>
#include <vector>
#include <algorithm>

void print(int elem){
    using namespace std;

    cout << elem << ' ';
}

int main()
{
    using namespace std;

    vector<int> coll;
    for(int i=1; i<=9; ++i){
        coll.push_back(i);
    }

    for_each(coll.cbegin(), coll.cend(), print);

    cout << endl;
    return 0;
}
