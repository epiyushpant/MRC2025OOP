/*modify factor program so that it asks for a number repetedly
until 0 is entered use while or do while loop to achieve this*/
#include<iostream>
using namespace std;
int main()
{
    unsigned int numb=1;
    unsigned long fact=1;
    while(numb!=0)
    {
        cout<<"Enter a number:";
        cin>>numb;
        for(int j=numb;j>=1;j--)
        {
            fact *=j;
        }
        cout<<"Factorial is"<<fact<<endl;
    }
    return 0;
}
//1 is the factorial of 0;