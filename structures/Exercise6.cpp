/*Write first letter and display the enumeration type not in integer form you can use switch to convert user enter charactert to enumeration type
You'll need two switches one for input and one for output*/
#include<iostream>
using namespace std;
enum etype {laborer,secratary,manager,accountant,executive,researcher};
int main() 
{
    etype job;
    char ch;
    cout<<"Enter first letter of (laborer,secratary,manager,accountant,executive,researcher)";
    cin >>ch;
    switch(ch)
    {
        case 'l':
        job=laborer;
        break;
        case 's':
        job=secratary;
        break;
        case 'm':
        job=manager;
        break;
        case 'a':
        job=accountant;
        break;
        case 'e':
        job = executive;
        break;
        case 'r':
        job =researcher;
        break;
    }
    switch(job)
    {
        case(laborer):
        cout<<"laborer";
        break;
        case(secratary):
        cout<<"secratary";
        break;
        case(manager):
        cout<<"Manager";
        break;
        case(accountant):
        cout<<"Accountant";
        break;
        case(executive):
        cout<<"Executive";
        break;
        case(researcher):
        cout<<"Researcher";
        break;
    }
    return 0;
}
