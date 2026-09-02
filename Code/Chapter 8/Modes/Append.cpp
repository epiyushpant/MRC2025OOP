#include <fstream>
#include <iostream>
using namespace std;

int main() {
	ofstream file("data.txt", ios::app);

	//app mode is used to append data to the end of the file. 
	//If the file doesn't exist, it will create a new file.

	//if it exists, it will preserve the existing content of the file and add new content to the end of the file.

	if (!file.is_open()) {
		cout << "Error opening file!" << endl;
		return 1;
	}

	file << "This line was added using append mode.\n";
	

	file.close();
	cout << "Data appended successfully." << endl;
	return 0;
}
