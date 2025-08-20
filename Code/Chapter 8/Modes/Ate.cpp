#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    fstream file;
    file.open("data.txt", ios::in | ios::out | ios::ate);

    if (!file) {
        cout << "Error opening file!";
        return 1;
    }

    file << "\nAdded using ios::ate";  // Starts at end, but can seek elsewhere
    file.seekg(3);  // Move read pointer to beginning

    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
    return 0;
}


