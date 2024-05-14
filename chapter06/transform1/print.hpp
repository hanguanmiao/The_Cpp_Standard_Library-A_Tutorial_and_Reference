#ifndef PRINT_HPP
#define PRINT_HPP

#include <string>

template <typename T>
inline void PRINT_ELEMENTS(const T& coll, const std::string &optstr=""){
    using namespace std;
    cout << optstr;
    for(const auto &elem : coll){
        cout << elem << ' ';
    }
    cout << endl;
}

#endif // PRINT_HPP
