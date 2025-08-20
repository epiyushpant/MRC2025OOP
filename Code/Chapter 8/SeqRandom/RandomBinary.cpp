#include <fstream>
#include <iostream>
using namespace std;

int main() {
    fstream file("data.dat", ios::in | ios::out | ios::binary | ios::trunc);

    int data[] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; ++i) {
        file.write(reinterpret_cast<char*>(&data[i]), sizeof(int));
    }

    // Read 3rd integer (index 2)
    file.seekg(2 * sizeof(int), ios::beg);
    int value;
    file.read(reinterpret_cast<char*>(&value), sizeof(int));
    cout << "3rd value: " << value << endl;

    file.close();
    return 0;
}
