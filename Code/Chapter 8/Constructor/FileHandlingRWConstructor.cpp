
//Reading and writing to a file using fstream constructor
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    fstream file("data.txt", ios::in | ios::out | ios::app);  // Read & append
    if (!file) {
        cout << "Error opening file!";
        return 1;
    }

    file << "Appending using fstream constructor.\n";

    file.seekg(0);  // Move read pointer to beginning
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
    return 0;
}
