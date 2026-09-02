
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
    //if you open in append mode, the read pointer will be at the end of the file, so you need to move it to the beginning to read the content.
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
    return 0;
}
