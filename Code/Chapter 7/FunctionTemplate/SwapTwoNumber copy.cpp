#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    swapValues(x, y);
    cout << "Swapped ints: x = " << x << ", y = " << y << endl;

    float m = 1.2f, n = 3.4f;
    swapValues(m, n);
    cout << "Swapped floats: m = " << m << ", n = " << n << endl;

    return 0;
}
