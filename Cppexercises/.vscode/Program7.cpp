/*You can convert temperature from degree cecius to degrees fahrenheit
 by multiplying by 9/5 and adding 32 WAP that allows the user to enter floating point number
 representing celsius and display the corresponding degrees in fahrenheit*/
 #include<iostream>
 using namespace std;
 int main() 
 {
    float c,f;
    cout<<"Enter temperature in celsius"<<endl;
    cin >> c;
    f=(c * 9/5) + 32;
    cout<<"Equivalent temperature in fahrenheit"<<f<<endl;
    return 0;
 }