#include <iostream>
using namespace std;

template <typename T>
void displayArray(T arr[], int size) {
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int intArr[] = {1, 2, 3, 4};
    float floatArr[] = {1.1f, 2.2f, 3.3f};

    cout << "Integer array: ";
    displayArray(intArr, 4);

    cout << "Float array: ";
    displayArray(floatArr, 3);

    return 0;
}
