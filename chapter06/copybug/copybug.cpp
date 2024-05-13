#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <exception>

int main()
{
    using namespace std;

    list<int> coll1 = {1,2,3,4,5,6};
    vector<int> coll2;

    try{
        // throw "aaaaaa";
        copy(coll1.begin(),coll1.end(), coll2.begin());
    }catch(std::exception &e){
        cout << e.what() << endl;
    }catch(...){
        cout << "1111111" << endl;
    }

    return 0;
}
