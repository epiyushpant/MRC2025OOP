#include <iostream>

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    std::cout << "Inside function (Pass by Value): a = " << a << ", b = " << b << std::endl;
}

int main() {
    int x = 5, y = 10;
    swapByValue(x, y);
    std::cout << "After function call: x = " << x << ", y = " << y << std::endl;
    return 0;
}




