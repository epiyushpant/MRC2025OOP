/*WAP based on the sterling structure of Exercise 10 in chapter 4.That obtains from the user  two amounts in old
style British format(9:19:11) adds them and displays teh result again in old-style format .Use three functions
The first should obtain a pounds shillings pence value from the user and return the values as a structure
of type sterling .The second should take two arguments of type sterling and return a value of same type.
which is sum of the arguments .The third should take a sterling structure as its argument and displays its value
*/
#include<iostream>
using namespace std;
struct sterling
{
    int pound;
    int shilling;
    int pence;
};
char ch;

sterling obtain(sterling& s1,sterling& s2);
sterling add(sterling ss1,sterling ss2);
void engldisp(sterling ss4);
int main()
{
    sterling s1,s2,s3;
    obtain(s1,s2);
    s3 =add(s1,s2);
    engldisp(s3);
}
sterling obtain(sterling& s1,sterling& s2)
{
    cout<<"Enter 1st amount:";
    cin>>s1.pound>>ch>>s1.shilling>>ch>>s1.pence;
    cout<<"Enter second amount:";
    cin>>s2.pound>>ch>>s2.shilling>>ch>>s2.pence;
    return s1,s2;
}
sterling add(sterling ss1,sterling ss2)
{
    sterling ss3;
    ss3.pound=ss1.pound+ss2.pound;
    ss3.shilling=ss1.shilling+ss2.shilling;
    if(ss3.shilling > 19)
    {
        ss3.pound++;
        ss3.shilling -=20;
    }
    ss3.pence=ss1.pence+ss2.pence;
    if(ss3.pence>11)
    {
        ss3.shilling++;
        ss3.pence -=11;
    }
    return ss3;
}
void engldisp(sterling ss4)
{
    cout<<ss4.pound<<ch<<ss4.shilling<<ch<<ss4.pence;
}