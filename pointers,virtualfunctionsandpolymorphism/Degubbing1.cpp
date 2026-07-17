#include<iostream>
#include<cstring>
using namespace std;
class Info
{
    protected:
    char name[50];
    int number;
    public :
    virtual void getName(char n[50])
        {
          
        }
        void getInfo(char n[50])
        {
            cout<<"\nInfo::getInfo";
            getName(n);
        }
      
};
class Name:public Info 
{
    public:
        void getName(char n[])
        {
            cout<<"\nName::getName";
            cout<<"\nEnter name:";
            cin>>n;
            strcpy(name,n);
            cout<<name;
        }
};
int main()
{
    Info *p;
    Name n;
    p=&n;
    char str[50];
    p->getInfo(str);
    return 0;
}