#include <fstream>
#include <iostream>
using namespace std;

int main() {
    fstream file;
    file.open("data.txt", ios::out | ios::trunc);

    if (!file) {
        cout << "Error opening file!";
        return 1;
    }

    file << "This will overwrite existing content.\n";

    
    file.close();
    return 0;
}

// out : open for writing 
// trunc: delete  existing content while oening file 

//  only using out deltes existing content of the file and overwrites it with new content.
// but combining with app or ate mode preserves existing content of the file and allows us to write new content to the file.



