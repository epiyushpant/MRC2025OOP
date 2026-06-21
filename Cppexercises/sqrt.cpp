//sqrt.cpp use of library function
//demonstrates sqrt() library function
#include<iostream> // for cout and cin
#include<cmath> //for sqrt()

using namespace std;

int main() 
{
double number,answer;//sqrt() requires type double
cout<<"Enter a number:";
cin >> number;
answer = sqrt(number);
cout << "Square root is "
<< answer <<endl; //displays it
return 0;
}