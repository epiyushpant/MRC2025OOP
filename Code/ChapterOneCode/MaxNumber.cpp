#include <iostream>
using namespace std;


int main() {
    float  num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;


    if (num1 > num2) {
        cout << "Maximum is: " << num1 << endl;
    }
    else {
        cout << "Maximum is: " << num2 << endl;
    }
    return 0;
}


/*

int main() {
    float length, breadth, area; 

    cout << "Enter legth and breadth of rectangle: ";
    cin >> length >> breadth; 

    area = length * breadth; 

    cout << "Area of rectangle is " << area; 
    return 0; 
}

*/

/* 
int main() {
    float principal, time, rate;
    float SimpleInterest; 

    cout << "Enter prinicpal amount : ";
    cin >> principal; 

    cout << "Enter time : ";
    cin >> time;

    cout << "Enter rate : ";
    cin >> rate;

    SimpleInterest  = principal * time * rate ;

    cout << "Simple Interest is " << SimpleInterest;
    return 0;
}

 */







