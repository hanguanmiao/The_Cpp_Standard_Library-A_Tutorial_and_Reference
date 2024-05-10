#include <iostream>
#include <chrono>
#include <ctime>
#include <string>


inline std::string asString(std::chrono::system_clock::time_point &tp){
    using namespace std;
    time_t t = chrono::system_clock::to_time_t(tp);
    string ts = ctime(&t);
    ts.resize(ts.size()-1);
    return ts;
}

inline std::chrono::system_clock::time_point makeTimePoint(int year, int mon, int day, int hour, int min, int sec=0){
    using namespace std;
    struct tm t;
    t.tm_sec = sec;
    t.tm_min = min;
    t.tm_hour = hour;
    t.tm_mday = day;
    t.tm_mon = mon-1;
    t.tm_year = year-1900;
    t.tm_isdst = -1;
    time_t tt = mktime(&t);
    if(-1==tt){
        throw "no valid system time";
    }
    return chrono::system_clock::from_time_t(tt);
}

int main()
{
    using namespace std;

    auto tp1 = makeTimePoint(2010,01,01,00,00);
    cout << asString(tp1) << endl;

    auto tp2 = makeTimePoint(2011,01,05,23,14,44);
    cout << asString(tp2) << endl;

    return 0;
}
