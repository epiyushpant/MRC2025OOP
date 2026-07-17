#include<iostream>
using namespace std;
class Human
{
    public:
        Human()
        {
        }
        virtual ~Human()
        {
            cout<<"Human::~Human";
        }
};
class Student:public Human
{
    public:
        Student()
        {

        }
        ~Student()
        {
            cout<<"Student::~Student()";
        }
};
int main()
{
    Human *H=new Student();
    delete H;
    return 0;
}