#include <iostream>
#include <deque>

int main()
{
    using namespace std;

    deque<float> coll;

    for(int i=1; i<=6; ++i){
        coll.push_front(i*1.1);
    }

    for(int i=0; i<static_cast<int>(coll.size()); ++i){
        cout << coll[i] << ' ';
    }

    cout << endl;
    return 0;
}
