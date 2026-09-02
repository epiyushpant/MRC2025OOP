#include <iostream>
#include <limits>
using namespace std;

int main() {
    int a = 10, b = 5;

    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl;

    cout << "a > b: " << (a > b) << endl;
    cout << "a == b: " << (a == b) << endl;

    cout << "(a > 5 && b < 10): " << (a > 5 && b < 10) << endl;
    cout << "(a > 15 || b < 10): " << (a > 15 || b < 10) << endl;

    cout << "Range of fundamental data types in C++:\n\n";

    cout << "char:\n";
    cout << "  Min: " << (int)numeric_limits<char>::min() << "\n";
    cout << "  Max: " << (int)numeric_limits<char>::max() << "\n\n";

    cout << "unsigned char:\n";
    cout << "  Min: " << (int)numeric_limits<unsigned char>::min() << "\n";
    cout << "  Max: " << (int)numeric_limits<unsigned char>::max() << "\n\n";

    cout << "short:\n";
    cout << "  Min: " << numeric_limits<short>::min() << "\n";
    cout << "  Max: " << numeric_limits<short>::max() << "\n\n";

    cout << "unsigned short:\n";
    cout << "  Min: " << numeric_limits<unsigned short>::min() << "\n";
    cout << "  Max: " << numeric_limits<unsigned short>::max() << "\n\n";

    cout << "int:\n";
    cout << "  Min: " << numeric_limits<int>::min() << "\n";
    cout << "  Max: " << numeric_limits<int>::max() << "\n\n";

    cout << "unsigned int:\n";
    cout << "  Min: " << numeric_limits<unsigned int>::min() << "\n";
    cout << "  Max: " << numeric_limits<unsigned int>::max() << "\n\n";

    cout << "long:\n";
    cout << "  Min: " << numeric_limits<long>::min() << "\n";
    cout << "  Max: " << numeric_limits<long>::max() << "\n\n";

    cout << "unsigned long:\n";
    cout << "  Min: " << numeric_limits<unsigned long>::min() << "\n";
    cout << "  Max: " << numeric_limits<unsigned long>::max() << "\n\n";

    cout << "float:\n";
    cout << "  Min: " << numeric_limits<float>::min() << "\n";
    cout << "  Max: " << numeric_limits<float>::max() << "\n\n";

    cout << "double:\n";
    cout << "  Min: " << numeric_limits<double>::min() << "\n";
    cout << "  Max: " << numeric_limits<double>::max() << "\n\n";

    cout << "long double:\n";
    cout << "  Min: " << numeric_limits<long double>::min() << "\n";
    cout << "  Max: " << numeric_limits<long double>::max() << "\n\n";


    return 0;
}

