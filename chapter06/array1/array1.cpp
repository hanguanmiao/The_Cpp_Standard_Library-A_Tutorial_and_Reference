#include <iostream>
#include <array>


int main()
{
    using namespace std;

    array<string,5> coll = {"hello", "world"};

    for(int i=0; i<static_cast<int>(coll.size()); ++i){
        cout << "i: " << coll[i] << endl;
    }
    return 0;
}
