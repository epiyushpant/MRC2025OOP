#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {

    //read mode is used to read the content of the file. If the file doesn't exist, 
    //it will return an error.

    ifstream file;
    file.open("output.txt", ios::in);

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


//Stream = the channel through which data flows between your program and the file.

