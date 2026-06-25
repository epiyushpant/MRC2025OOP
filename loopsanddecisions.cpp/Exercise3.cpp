//Exercise3.cpp
/*operators usch as >>, which read input from the keyboard must be able to convert
a series of digits into a number.WAP that does the same thing. It should allow the user
to type to to six digits. and then display the resulting number as type long integer. 
Tghe digits should be read individually ans character using getche(). constructing the number 
involve multiplying the existing value by 10 and then adding a new digit (Hint:subtract 48 or'0'
to go from ASCII to numerical digit)*/
#include<iostream>
using namespace std;
#include<conio.h>

int main()
{
    char ch;
    unsigned long number=0;
    cout<<"Enter a number";
    while((ch=getche()) !='\r') //quit on enter
    number = number*10 +ch-'0';
    cout<<"\nNumber is:"<<number<<endl;
    return 0;
}