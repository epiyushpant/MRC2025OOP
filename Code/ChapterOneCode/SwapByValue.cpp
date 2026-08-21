#include <iostream>

void swapByValue(int a, int b) {

    std::cout << "Address of a: " << &a << ", Address of b: " << &b << std::endl;
    int temp = a;
    a = b;
    b = temp;
    std::cout << "Inside function (Pass by Value): a = " << a << ", b = " << b << std::endl;
    std::cout << "Note: The values of a and b are swapped inside the function, but this does not affect the original variables." << std::endl;  
}

int main() {
    int x = 5, y = 10;
    std::cout << "Before function call: x = " << x << ", y = " << y << std::endl;
    std::cout << "Address of x: " << &x << ", Address of y: " << &y << std::endl;
    swapByValue(x, y);
    std::cout << "After function call: x = " << x << ", y = " << y << std::endl;
    std::cout << "Note: The values of x and y remain unchanged outside the function." << std::endl;
    return 0;
}




