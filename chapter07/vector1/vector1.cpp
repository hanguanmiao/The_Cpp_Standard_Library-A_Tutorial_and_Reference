#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>

int main()
{
    using namespace std;

    vector<string> sentence;

    sentence.reserve(5);

    sentence.push_back("hello,");
    sentence.insert(sentence.end(), {"how","are","you","?"});

    copy(sentence.cbegin(), sentence.cend(), ostream_iterator<string>(cout, " "));
    cout << endl;

    cout << "   max_size(): " << sentence.max_size() << endl;
    cout << "   size():     " << sentence.size() << endl;
    cout << "   capacity(): " << sentence.capacity() << endl;

    swap(sentence[1], sentence[3]);

    sentence.insert(find(sentence.begin(), sentence.end(), "?"), "always");

    sentence.back() = "!";

    copy(sentence.cbegin(), sentence.cend(), ostream_iterator<string>(cout, " "));
    cout << endl;

    cout << "   size():     " << sentence.size() << endl;
    cout << "   capacity(): " << sentence.capacity() << endl;

    sentence.pop_back();
    sentence.pop_back();
    sentence.shrink_to_fit();

    cout << "   size():     " << sentence.size() << endl;
    cout << "   capacity(): " << sentence.capacity() << endl;

    return 0;
}
