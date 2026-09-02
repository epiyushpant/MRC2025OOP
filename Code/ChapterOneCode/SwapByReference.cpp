#include <iostream>

void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    std::cout << "Address of a: " << &a << ", Address of b: " << &b << std::endl;
    std::cout << "Inside function (Pass by Value): a = " << a << ", b = " << b << std::endl;
    std::cout << "Note: The values of a and b are swapped inside the function, and this affects the original variables." << std::endl;

}

int main() {
    int x = 5, y = 10;

    std::cout << "Before function call: x = " << x << ", y = " << y << std::endl;
    std::cout << "Address of x: " << &x << ", Address of y: " << &y << std::endl;
    swapByReference(x, y);



    std::cout << "After function call: x = " << x << ", y = " << y << std::endl;
    std::cout << "Note: The values of x and y are swapped outside the function as well." << std::endl;

    return 0;
}



    
