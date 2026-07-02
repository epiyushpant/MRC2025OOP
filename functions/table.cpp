//table.cpp
//demonstrates simple function
#include<iostream>
using namespace std;

void starline(); //function declaration

int main()
{
    starline();//function call
    cout<<"Data type\tRange"<<endl;
    starline();//function call
    cout<<"char \t -128 to 127"<<endl
    <<"short \t -32,768 to 32,767"<<endl
    <<"int \t System dependent"<<endl
    <<"long \t -2,147,483,648 to 2,147,483,647"<<endl;
starline(); //function call
return 0;
}
//............................................
//starline()
//function definition
void starline()
{
    for(int j=0;j<45;j++)
    {
        cout<<"*"; //prints 45 starline
    }
cout<<endl;
}