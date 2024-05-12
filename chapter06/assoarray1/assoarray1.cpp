#include <iostream>
#include <unordered_map>
#include <string>

int main()
{
    using namespace std;

    unordered_map<string,float> coll;

    coll["VAT1"] = 0.16;
    coll["VAT2"] = 0.07;
    coll["Pi"] = 3.1415;
    coll["an arbitrary number"] = 4983.223;

    coll["VAT1"] += 0.03;

    cout << "VAT difference: "<< coll["VAT1"] - coll["VAT2"] << endl;
    return 0;
}
