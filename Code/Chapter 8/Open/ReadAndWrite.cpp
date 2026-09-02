#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outFile;
    outFile.open("data.txt", ios::out);

    if (!outFile) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }

    outFile << "Hello C++\n";
    outFile << "This is written in one file.\n";
    outFile.close();

    ifstream inFile;
    inFile.open("data.txt", ios::in);

    if (!inFile) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    string line;
    cout << "File contents:\n";
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();

    return 0;
}