//

#include <iostream>
using namespace std;

namespace Math {
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }
}

int main() {
    cout << "Addition: " << Math::add(5, 3) << endl;
    cout << "Subtraction: " << Math::subtract(10, 4) << endl;
    return 0;
}


