//retref.cpp
//returning reference values
#include<iostream>
using namespace std;
int x; //global variable
int& setx(); //function declaration
int main()
{
    setx()=99;
    cout<<"x="<<x<<endl;
    return 0;
}
int& setx()
{
    return x;
}