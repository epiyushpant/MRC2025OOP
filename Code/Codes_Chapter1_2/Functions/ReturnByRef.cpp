//In C++, return by reference means a function returns an alias (reference) to an existing variable instead of returning a copy of its value.


// #include <iostream>
// using namespace std;

// int square(int x)
// {
//     return x * x;
// }

// int main()
// {
//     int a = 5;
//     int result = square(a);

//     cout << result << endl;   // 25
// }

#include <iostream>
using namespace std;
int x = 5;  // Global variable​
int& give() {
    return x;  // Returning a reference (alias) to the global variable x

}

int main() {
    give() = 100;  // Changes x directly​
    cout << x;     // Output: 100​
    return 0;
}