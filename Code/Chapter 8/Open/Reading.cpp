#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ifstream file;
    file.open("output.txt", ios::in);

    //ifstream inFile("output.txt");

    if (file) {
        string line;
       while (getline(file, line)) {
        cout << line << endl;
       }
    }
    else {
        cout << "Error opening file!";
        return 1;
    }
   
    file.close();
    return 0;
}

