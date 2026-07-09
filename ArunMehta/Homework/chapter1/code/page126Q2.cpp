#include <iostream>
using namespace std;

int main(){
    /*
     2. Write a temperature-conversion program that gives the user the option of converting
     Fahrenheit to Celsius or Celsius to Fahrenheit. Then carry out the conversion. Use floating-point numbers.
     Interaction with the program might look like this:
     Type 1 to convert Fahrenheit to Celsius,
          2 to convert Celsius to Fahrenheit: 1
     Enter temperature in Fahrenheit: 70
     In Celsius that's 21.111111
     
    */
    int input;
    float val;
    float result;
    string msg;

    cout<<"Temperature Convertion Toos"<<endl;
    cout<<"----------------------------"<<endl<<endl;

    cout<<"Type 1 to convert Fahrenheit to Celsius,"<<endl;
    cout<<"     2 to convert Celsius to Fahrenheit : ";
    cin>>input;

    if(input == 1){
        cout<<"Enter temperature in Fahrenheit: ";
        cin>>val;
        result = (val -32) * 5/9;
        cout<<"In Celsius that's "<< result;
    }else if(input == 2){
        cout<<"Enter temperature in Celsius: ";
        cin>>val;
        result = (val * 9/5) + 32;
        cout<<"In Fahrenheit that's "<< result;
    }else{
        cout<<"Invalid your input number.";
    }


    return 0;
}