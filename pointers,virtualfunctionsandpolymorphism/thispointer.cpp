#include<iostream>
#include<cstring>
using namespace std;
class Person
{
    char name[20];
    float age;
    public:
        Person(char *s,float a)
        {
            strcpy(name,s);
            age =a;
        }
    Person & greater(Person & x)
    {
        if(x.age>=age)
            return x;
        else
            return *this;
    }
    void display(void)
    {
        cout<<"name:"<<name<<"\n"
            <<"Age:"<<age<<"\n";
    }
};
int main()
{
    Person P1("John",37.50),
            P2("Ahmed",29.0),
            P3("Hebber",40.25);
    Person p=P1.greater(P3); //P1.greater(P3)
    cout<<"Elder Person is:\n";
    p.display();
    p=P1.greater(P2);//P2.greater(P1)
    cout<<"Elder Person is:\n";
    p.display();
    return 0;
}
