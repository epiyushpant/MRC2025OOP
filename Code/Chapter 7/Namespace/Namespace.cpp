// A namespace is used to avoid name conflicts in large projects by 
//grouping entities like variables, functions, and classes under a named scope.

//A namespace is a feature in C++ used to group identifiers (such as variables, functions, classes, objects)
 //under a unique name to avoid naming conflicts. 
 //It helps in organizing large codebases and libraries by preventing name clashes and enabling modular development.



// Need for Namespace:
// In large projects or when using multiple libraries, there may be functions or variables with identical names. 
//If these names exist in the same global scope, the compiler will generate a name conflict error.
// Namespaces provide a way to encapsulate these identifiers under different names to avoid such issues.


#include <iostream>
using namespace std;



// Define a namespace
namespace MyTools {
    void displayMessage() {
        cout << "Hello from MyTools namespace!" << endl;
    }
}

using namespace MyTools; 
int main() {
    // Access function using namespace
    displayMessage();
    return 0;
}
