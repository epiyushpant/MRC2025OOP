/*Create a structure called employee that contains two members:
and employee number(type int) and the employee's compensation (in dollars;Type float)
Ask the user to fill in this data for three employees, store it in t hree variable
of tyep struct employee and then display the information for each employee*/
#include<iostream>
#include<iomanip>//for setw()
using namespace std;

struct employee{
    int emp_num;
    float emp_compen;
};
int main()
{
    employee emp1,emp2,emp3;
    cout<<"Enter number and compensation for 1st employee";
    cin>>emp1.emp_num>>emp1.emp_compen;
    cout<<"Ener number and compensation for 2nd employee";
    cin>>emp2.emp_num>>emp2.emp_compen;
    cout<<"Enter number and compensation for 3rd employee";
    cin>>emp3.emp_num>>emp3.emp_compen;
    cout<<"Information about 3 employees are" <<endl;
    cout<<setw(5)<<emp1.emp_num<<setw(6)<<emp1.emp_compen<<endl;
    cout<<setw(5)<<emp2.emp_num<<setw(6)<<emp3.emp_compen<<endl;
    cout<<setw(5)<<emp3.emp_num<<setw(6)<<emp3.emp_compen<<endl;
    return 0;
}