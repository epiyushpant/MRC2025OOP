#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    fstream file;
    file.open("data.txt" , ios::in | ios::out);

    if (!file) {
        cout << "Error opening file!";
        return 1;
    }

    file << "Adding new content.\n";
    file.seekg(0);  // Move read pointer to beginning

    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
    return 0;
}
