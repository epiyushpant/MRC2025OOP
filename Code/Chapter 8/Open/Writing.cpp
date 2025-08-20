#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ofstream file;
    file.open("output.txt", ios::out);

    if (!file) {
        cout << "Error opening file!";
        return 1;
    }

    file << "Written using open() method.\n";
    file.close();
    return 0;
}
