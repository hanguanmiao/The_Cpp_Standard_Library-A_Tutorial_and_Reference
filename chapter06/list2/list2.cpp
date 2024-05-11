#include <iostream>
#include <list>

int main()
{
    using namespace std;

    list<char> coll;

    for(char c=0; c<=100; ++c){
        coll.push_back(c);
    }

    while(!coll.empty()){
        cout << coll.front() << ' ';
        coll.pop_front();
    }

    cout << endl;
    return 0;
}
