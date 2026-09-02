
//Reading from a file using constructor in C++

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ifstream inFile("output.txt");  // Opens file for reading
    if (!inFile) {
        cout << "File not found!";
        return 1;
    }

    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();
    return 0;
}



