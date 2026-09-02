#include <fstream>
#include <iostream>
using namespace std;

//write mode deletes the existing content of the file and  overwrites it with new content. 
//If the file doesn't exist, it will create a new file.


int main() {
    ofstream file;
    file.open("output.txt", ios::out);

    if (!file) {
        cout << "Error opening file!";
        return 1;
    }

    file << "I learned file handling write mode";
    file.close();
    return 0;
}



