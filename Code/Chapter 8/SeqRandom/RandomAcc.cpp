#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ifstream file("data.txt");
    string line;
    int lineNumber = 0;

    while (getline(file, line)) {
        ++lineNumber;
        if (lineNumber >= 2 && lineNumber <= 4) {
            cout << "Line " << lineNumber << ": " << line << endl;
        }
        if (lineNumber > 4) break;
    }

    file.close();
    return 0;
}
