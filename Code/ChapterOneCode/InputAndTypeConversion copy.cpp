#include <iostream>
#include <string>
using namespace std;

int main() {
   
    //Implicit conversion 
    int num1 = 10 ; 

    float num2 = num1 ; 
    cout << "Converted Number is " << num2 ; 

    //Explicit Conversion 

    float  firstNum = 10.7 ; 

    int secondNum =  (int)firstNum ; 
    cout << "Second Number is " << secondNum ;


    // float my_float = 3.14;
    
    // // convert float to int
    // int my_int = static_cast<int>(my_float);
    // cout << "Float: " << my_float << " -> Int: " << my_int << endl;

     
    // int  a = 10; 
    // int b = 20; 

    // int c = (a/b) *100 ; 
    // int d  = a/float(b) *100 ;
    // int e = float(a)/b *100 ;

    // cout << "Percentage is " << c << endl;
    // cout << "Correct Percentage is " << d << endl;

    // cout << "Correct Percentage is " << e << endl;
    
    return 0;
}
