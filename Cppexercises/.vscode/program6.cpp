/*On a certain day the british pound was equivalent to $1.487
the france franc was $0.172, the German deutchemark was $0.584
and japanese yen was $ 0.00955 WAP that allows the user to enter an amount in dollar
and then display this value converted to these four other monetary unit
*/
#include<iostream>
using namespace std;
int main()
{
    float Bp,f,d,y,A;
    cout <<"Enter amount in dollar:\n";
    cin >> A;
    Bp=1.487*A;
    f=0.172*A;
    d=0.584*A;
    y=0.00959*A;
    cout<<"British pound ="<<Bp<<endl
    <<"France franc =" <<f<<endl
    <<"Deutschemark = "<<d<<endl
    <<"Japanese yen = " << y<<endl;
    return 0;
}