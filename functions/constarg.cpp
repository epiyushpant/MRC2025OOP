//constarg.cpp
//demonstrates constant function arguments
#include<iostream>
using namespace std;

void afunc(int&a,const int&b);
int main()
{
    int alpha=7;
    int beta=11;
    afunc(alpha,beta);
    return 0;
}
void afunc(int& a,const int& b)//definition
{
    a = 107 ; //ok
    b = 111;//error can't modify constant argument
} //theres error can't modify constant value