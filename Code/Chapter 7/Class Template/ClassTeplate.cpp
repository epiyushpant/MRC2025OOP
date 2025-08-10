#include <iostream>
using namespace std;

template <class T1, class T2>

class Pair {
private:
    T1 first;
    T2 second;
public:
    Pair(T1 f, T2 s) {
        first = f;
        second = s;
    }

    void display() {
        cout << "First: " << first << ", Second: " << second << endl;
    }
};

int main() {
    Pair<int, double> p1(10, 99.99);
    p1.display();

    Pair<string, int> p2("Age", 25);
    p2.display();

    return 0;
}
