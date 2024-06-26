#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
    using namespace std;

    unordered_map<string,double> coll {
        {"tim",9.9},
        {"struppi",11.77}
    };

    for(pair<const string,double> &elem : coll){
        elem.second *= elem.second;
    }

    for(const auto &elem : coll){
        cout << elem.first << ": " << elem.second <<endl;
    }

    cout << endl;
    return 0;
}
