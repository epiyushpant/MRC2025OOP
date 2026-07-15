#include<iostream>
#include<cstring>
using namespace std;
class Student
{
    char name[10];
    int rollNumber;
    public:
        Student() 
        {
            strcpy(name,"Alankay");
            rollNumber=1025;
        }
        void setNumber(int no)
        {
            rollNumber=no;
        }
        int getRollNumber()
        {
            return rollNumber;
        }
};
class AnualTest: public Student
{
    int mark1,mark2;
    public:
        AnualTest(int m1,int m2):
        mark1(m1),mark2(m2)
        {}
        int getRollNumber()
        {
            return Student::getRollNumber();
        }
};
int main()
{
    AnualTest test1(92,85);
    cout<<test1.getRollNumber();
    return 0;
}