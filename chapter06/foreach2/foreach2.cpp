#include <iostream>
#include <vector>
#include <algorithm>

class PrintInt{
public:
    void operator()(int elem) const {
        std::cout << elem << ' ';
    }
};

int main()
{
    using namespace std;

    vector<int> coll;
    for(int i=1;i<=9; ++i){
        coll.push_back(i);
    }

    for_each(coll.cbegin(), coll.cend(), PrintInt());

    cout << endl;
    return 0;using namespace std;
}
