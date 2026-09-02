#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ifstream inFile("data.txt");
    if (!inFile) {
        cout << "Error opening file!";
        return 1;
    }

    string line;
    int lineNumber = 0;

    while (getline(inFile, line)) {
        ++lineNumber;

        //  Read only lines 2 to 4
        if (lineNumber >= 2 && lineNumber <= 4) {
            cout << "Line " << lineNumber << ": " << line << endl;
        }

        //  Stop after line 4
        if (lineNumber > 4) break;
    }

    return 0;
}
