#include<iostream>
#include<cstring>
using namespace std;
class person
{
    protected:
    char name[20];
    int code ;
    public:
        person ():name(" "),code(0) {}
        person(char n[],int c)
        {
            strcpy(name,n);
            code=c;
        }
};
class account:virtual public person
{
    protected:
    float pay;
    public:
        account(char n[],int c,float p):person(n,c)
        {
            pay=p;
        }
};
class admin:virtual public person
{
    protected:
        char exper[20];
    public:
        admin(char n[],int c,char e[]):person(n,c)
        {
            strcpy(exper,e);
        }
};
class person1:virtual public admin,virtual public account
{
    public:
        person1(char n[],int c,char e[],float p):person(n,c),account(n,c,p),admin(n,c,e)
        {
            
        }
        void displaydata()
        {
            cout<<name<<" "<<code<<" "<<exper<<" "<<pay<<endl;
        }
        void updatedata(char n[],int c,char e[],float p)
        {
            strcpy(name,n);
            code=c;
            strcpy(exper,n);
            pay=p;
        }
};
int main()
{
    person1 p("Avinab",1,"4.0",15000);
    p.displaydata();
    cout<<endl;
    p.updatedata("Rijal",2,"5.0",20000);
    p.displaydata();
    return 0;
}