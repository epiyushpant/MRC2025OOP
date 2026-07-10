//linesin.cpp
//reads multiple lines, terminates on '$' character
#include<iostream>
using namespace std;
int main()
{
    const int MAX=2000;
    char str[MAX];
    cout<<"Enter a string:";
    cin.get(str,MAX,'$');
    cout<<"You entered:"<<str;
    return 0;
}