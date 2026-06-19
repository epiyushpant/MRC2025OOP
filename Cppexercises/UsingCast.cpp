//Using Cast
//tests signed and unsigned casts
//if range of signed and unsigned var is exceded we can use user made cast to change the data type and display result
#include<iostream>
using namespace std;

int main() 
{
    int intVar=15000000000;
    intVar = (intVar * 10) / 10; //result too large
    cout << "Value of intVar     = " << intVar<<endl; //error

    intVar = 15000000000;
    intVar = (static_cast<double>(intVar) * 10) /10;
    cout<<"Value of intVar= " << intVar << endl; //correct answer
    return 0;

}