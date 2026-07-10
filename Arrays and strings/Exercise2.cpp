//exercise2.cpp
//Arrays of objects
#include<iostream>
using namespace std;
const int MAX=80;
class employee
{
    private:
        char name[MAX];
        long employeeno;
    public:
        employee()
        { }
        employee(char c[MAX],long e)
        { 
            c=name;
            e=employeeno;
        }
    void getchar()
    {
        cout<<"Enter employee name:";
        cin>>name;
        cout<<"Enter employee number:";
        cin>>employeeno;
    }
    void putchar()
    {
        cout<<name<<"  "<<employeeno<<endl;
    }
};
int main()
{
    employee e1[3]; 
    for(int j=0;j<3;j++)
    {
        e1[j].getchar();
    }
    for(int j=0;j<3;j++)
    {
     e1[j].putchar();
    }
    return 0;
}