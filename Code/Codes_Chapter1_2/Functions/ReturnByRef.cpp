#include <iostream>
using namespace std;
int x = 5;  // Global variable​
int& give() {
    return x;  // Returning reference to global variable  , return address​

}

int main() {
    give() = 100;  // Changes x directly​
    cout << x;     // Output: 100​
    return 0;
}