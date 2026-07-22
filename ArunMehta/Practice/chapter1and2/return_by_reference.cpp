#include <iostream>
using namespace std;

int a=10;
/*
    Retruning by reference means a function returns the address (reference) of a variable instead
    of just its value. This allows the caller to directly access and modify the original variable
    through the returned reference.
    
    # When to use
    --------
    - You need to modify an existing variable directly.
    - Avoiding unnecessary copies of large objects for efficiency
    - Implementing operator[] or operator = in custom classes. 
*/
int& rtnRef()
{
    return a; // returning reference to global variable, 
}

int main(){
    rtnRef() = 100; // changes a directly

    cout << a; // output: 100

    return 0;
}
