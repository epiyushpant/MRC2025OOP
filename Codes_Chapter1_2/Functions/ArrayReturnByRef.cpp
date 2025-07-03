#include <iostream>
using namespace std;

int& getElement(int arr[], int index) {
    return arr[index]; // Returning reference to array element
}

int main() {
    int myArray[5] = {1, 2, 3, 4, 5};

    getElement(myArray, 2) = 10; // Modifying element at index 2
    cout << "Updated array: ";
    
    for (int i = 0; i < 5; i++) {
        cout << myArray[i] << " "; // Output: 1 2 10 4 5
    }

    return 0;
}
