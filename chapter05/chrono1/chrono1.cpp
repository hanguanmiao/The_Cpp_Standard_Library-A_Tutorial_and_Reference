#include <iostream>
#include <string>
#include <chrono>

std::string asString(const std::chrono::system_clock::time_point &tp){
    using namespace std;
    time_t t = chrono::system_clock::to_time_t(tp);
    string ts = ctime(&t);
    ts.resize(ts.size()-1);

    return ts;
}

std::string asString2(const std::chrono::system_clock::time_point &tp){
    using namespace std;
    time_t t = chrono::system_clock::to_time_t(tp);
    string ts = asctime(gmtime(&t));
    ts.resize(ts.size()-1);

    return ts;
}

int main()
{
    using namespace std;
    chrono::system_clock::time_point tp;
    cout << "epoch: " << asString(tp) << endl;
    cout << "epoch: " << asString2(tp) << endl;

    tp = std::chrono::system_clock::now();
    cout << "now: " << asString(tp) << endl;
    cout << "now: " << asString2(tp) << endl;

    tp = std::chrono::system_clock::time_point::min();
    cout << "min: " << asString(tp) << endl;
    cout << "min: " << asString2(tp) << endl;

    tp = std::chrono::system_clock::time_point::max();
    cout << "max: " << asString(tp) << endl;
    cout << "max: " << asString2(tp) << endl;
    return 0;
}
