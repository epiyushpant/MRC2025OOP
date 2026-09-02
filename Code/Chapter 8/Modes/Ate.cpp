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

    file << "\nAdded using ios::ate";  
    
    // If we use mode mode ate :  Starts at end, but can seek elsewhere
    file.seekg(3);  
    
  
  /* 
    
    Move read pointer to beginning , here we are moving the read pointer to the 3rd position in the file, 
    so it will read from there.
    
    ate mode opens the file and moves the write pointer to the end of the file, 
    but we can still read from the beginning by using seekg() to move the read pointer to the desired position.


    */ 

    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
    return 0;
}


