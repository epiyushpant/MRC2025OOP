//table2.cpp
//demonstrates function definition preceding function calls
#include<iostream>
using namespace std;
//........................................................
//starline()
void starline()
{
    for(int j=0;j<45;j++)
    {
        cout<<"*";
    }
    cout<<endl;
}
int main() //main() follows function
{
    starline(); //call to function
    cout<<"Data Type \t Range"<<endl;
    starline();
    cout<<"char \t\t -128 to 127"<<endl
    <<"short \t\t -32,768 to 32,767"<<endl
    <<"int \t\t  system dependent"<<endl
    <<"long \t\t -2,147,483,648 to 2,147,483,647"<<endl;
    starline();
return 0;
}