#include<iostream>
#include<iomanip>
using namespace std;
int main() 
{
    int numb,cube;
    for(numb=1;numb<=10;numb++)
    {
        cout<<setw(4)<<numb;//4 spaces for numb
        cube = numb*numb*numb;
        cout<<setw(6)<<cube<<endl; //4+2=6 spaces for cubes
    }
    return 0;
}