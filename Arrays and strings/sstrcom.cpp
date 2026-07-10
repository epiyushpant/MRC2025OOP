//sstrcom.cpp
//comparing string objects
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string aName="George";
    string userName;
    cout<<"Enter your first Name:";
    cin>>userName;
    if(userName==aName)
        cout<<"Greetings George\n";
    else if(userName<aName)
        cout<<"you are before George\n";
    else
        cout<<"you come after George\n";
    int n=userName.compare(0,2,aName,0,2);
    cout<<"The first two letter or your name ";
    if(n==0)
        cout<<"match\n";
    else if(n<0)
        cout<<"come before:\n";
    else 
        cout<<"come after:\n";
    cout<<aName.substr(0,2)<<endl;
    return 0;
}