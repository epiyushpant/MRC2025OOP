//blanksin.cpp
//reads string with embedded blanks
#include<iostream>
using namespace std;

int main()
{
    const int MAX=60;
    char str[MAX];
    cout<<"Enter a string:";
    cin.get(str,MAX); //put string in str
    cout<<"you entered:"<<str<<endl;
    return 0;
}