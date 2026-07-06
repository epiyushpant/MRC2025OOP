/*Create a employee class,basing it on Exercise 4 chapter4. The member data should comprise an int
for storing the employee number and float for storing the employee's compensation.Member function should 
allow the user to enter this data and display it. Write a main() that allows the user to enter data for 
three employees and display it*/
#include<iostream>
using namespace std;

class Employee 
{
    private:
        int empno;
        float compen;
    public:
        Employee():empno(0),compen(0.0f)
        { }
        Employee(int e,float c): empno(e),compen(c)
        { }
    void get()
    { 
        cout<<"Enter employee no:";cin>>empno;
        cout<<"Enter employee compensation:";cin>>compen;
    }
    void display()
    {
        cout<<"Employee number is"<<empno<<endl;
        cout<<"Employe compensation is"<<compen<<endl;
    }
};
int main(){
Employee e1;
Employee e2;
Employee e3;
e1.get();
e2.get();
e3.get();

e1.display();
e2.display();
e3.display();

return 0;
}


