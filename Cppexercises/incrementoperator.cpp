//increment.cpp
//demonstrates the increment operator
#include<iostream>
using namespace std;

int main() 
{
    int count =10;
    cout<<count<<endl;
    cout << ++count<<endl; //prefix displays 11 
    cout << count<<endl; //displays 11
    cout << count++ <<endl; //postfix displays 11 because postfix count is done first before increment
    cout << count << endl; //displays 12
    return 0;
}