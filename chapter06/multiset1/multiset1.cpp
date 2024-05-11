#include <iostream>
#include <string>
#include <set>


int main()
{
    using namespace std;

    multiset<string> cities{
        "Braunschweig", "Hanover", "Frankfurt", "New York", "Chicago", "Toronto", "Paris", "Frankfurt"
    };

    for(const auto &elem : cities){
        cout << elem << "  ";
    }
    cout << endl;

    cities.insert({"London", "Munich", "Hanover","Braunschweig"});

    for(const auto &elem : cities){
        cout << elem << "  ";
    }
    cout << endl;
    return 0;
}
