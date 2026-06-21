/*In the heyday of British Empire , Great Britain used the monetary system based on 
pounds,shillings and pence.There were 20 shillings to pound and 12 pence to a shilling
The notation for this old system used the pound sign £ and two decimal points for example £5.2.8 meant
5 pound 2 shilling 8 pence (Pence is plural of penny) the new monetary system introduced in the 1950s,
consists of only pound and pence with 100 pence to a pound(like us dollar and cents) we'll call this 
new decimal system decimal pounds . Thus £5.2.8 in the ond notation is £5.13 in decimal pounds (actually 1.3333333)
Wap to convert old pound shillings-pence format to decimal pounds An example of the user's interaction with the program would be
Enter Pounds:7
Enter shillings:17
Enter pence:9
Decimal pounds : £7.89*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float pounds,shillings,pence;
    cout<<"Enter Pounds:";
    cin>>pounds;
    cout <<"Enter shillings:";
    cin >> shillings;
    cout <<"Enter pence";
    cin >> pence;
    pence = pence + shillings*12;
    pounds= pounds + (pence)/240;
    cout<<"Decimal pounds:"<<pounds<<endl;
    return 0;
}