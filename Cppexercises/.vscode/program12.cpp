#include<iostream>
#include<iomanip>
using namespace std;
int main() 
{
    double pounds,fractionalpounds,Totalpence,shillings,fracshillings,pence;
    cout<<"Enter amount in pounds";
    cin>>pounds;
    fractionalpounds = pounds - static_cast<int>(pounds);
    Totalpence = fractionalpounds *240; //since 1 pounds = 240 pence
    shillings = Totalpence / 12;
    fracshillings = shillings-static_cast<int>(shillings);
    pence = fracshillings * 12; //12 pence = 1 shillings;
    cout<<static_cast<int>(pounds)<<"."<<static_cast<int>(shillings)<<"."<<pence<<endl;
    return 0;
}