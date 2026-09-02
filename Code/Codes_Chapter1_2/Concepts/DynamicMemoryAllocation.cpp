#include <iostream>
using namespace std;


/*  
int main() {
    const int MAX_SIZE = 100;  // Define a fixed maximum size
    int arr[MAX_SIZE];         // Static allocation
    int n;

    cout << "Enter number of elements (up to " << MAX_SIZE << "): ";
    cin >> n;

    if (n > MAX_SIZE) {
        cout << "Error: Maximum limit exceeded." << endl;
        return 1;
    }

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "You entered: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }

    return 0;
}
     */


int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    // Dynamically allocate array of size n
    int* arr = new int[n];

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "You entered: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    // Free the allocated memory
    delete[] arr;

    return 0;
}
