/*This is a program that adds pounds shillings and pence if pence > 11 carry goes to shilling
and if shillings goes beyond 19 carry goes to pound */
#include<iostream>
#include<conio.h> //for getche()
using namespace std;
int main() 
{
    int p,s,pe,pe1,pe2,s1,s2,p1,p2;
    char ans;
    char dot1,dot2;
    do{
        cout<<"Enter first amount:";cin>> p1 >> dot1 >> s1 >> dot2 >> pe1; 
        cout<<"Enter second amount:";cin >> p2>> dot1>> s2>> dot2>> pe2;
        pe=pe1+pe2;
        if (pe>11)
        {
            s++;
            pe= pe-12; //pe !=0 because if 16 pence 4 pence is still there
        }
        s=s1+s2;
        if (s>19)
        {
            p++;
            s=s-20;
        }
        p=p1+p2;
        cout<<"\nTotal is"<< p <<dot1<<s<<dot2<<pe;
        cout<<"\nDo you  want to continue(y/n)?";
    }while((ans=getche()) != 'n');
    return 0;
}
