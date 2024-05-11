#include <iostream>
#include <vector>

int main()
{
    using namespace std;

    vector <int> coll;

    for(int i=1; i<=6; ++i){
        coll.push_back(i);
    }

    for(int i=0; i<static_cast<int>(coll.size()); ++i){
        cout << coll[i] << ' ';
    }

    cout << endl;
    return 0;
}
