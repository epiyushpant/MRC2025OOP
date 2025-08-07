#include <iostream>
#include <string>
using namespace std;

template <typename T>
bool isEqual(T a, T b) {
    return a == b;
}

// Template specialization for strings
template <>
bool isEqual<string>(string a, string b) {
    return a.compare(b) == 0;
}

int main() {
    cout << boolalpha;
    cout << "Is 5 equal to 5? " << isEqual(5, 5) << endl;
    cout << "Is 'hello' equal to 'hello'? " << isEqual<string>("hello", "hello") << endl;
    return 0;
}
