#include <iostream>
using namespace std;

struct Person
{
    string Name;
    int Age;
    double Height;
};

int main()
{
    Person P;

    P.Name ="Arun";
    P.Age = 30;
    P.Height =5.5;

    cout<<"Name: "<< P.Name <<endl;
    cout<<"Age: "<<P.Age<<endl;
    cout<<"Height: "<<P.Height<<" feet"<<endl;

    return 0;
}