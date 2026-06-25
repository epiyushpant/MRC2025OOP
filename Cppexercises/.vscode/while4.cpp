//while4.cpp
//prints numbers raised to 4 powers
#include<iostream>
#include<iomanip>
using namespace std;
int main() 
{
    int numb=1;
    int pow = 1;
    while(pow < 10000)
    {
        cout<<setw(2)<<numb;//display number
        cout<<setw(5)<<pow<< endl;//display 4th power
        ++numb;
        pow = numb*numb*numb*numb;
    }
    return 0;
}