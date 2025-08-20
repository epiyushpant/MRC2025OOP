#include <fstream>
#include <iostream>
using namespace std;

int main() {
    fstream file;
    file.open("data.txt", ios::out | ios::trunc);

    if (!file) {
        cout << "Error opening file!";
        return 1;
    }

    file << "This will overwrite existing content.\n";
    file.close();
    return 0;
}
