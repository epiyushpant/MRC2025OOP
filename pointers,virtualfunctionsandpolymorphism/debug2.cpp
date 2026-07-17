#include<iostream>
using namespace std;
class person
{
    int age;
    public:
        person()
        {}
        person(int a)
        {
            this->age=a;
        }
        int getAge()
        {return age;}
        person & operator <(person &p)
        {
            return age < p.age ? *this : p;
        }

};
int main()
{
    person p1(15);
    person p2(11);
    person p3;
    p3=p1<p2;
    cout<<p3.getAge();
    return 0;
}