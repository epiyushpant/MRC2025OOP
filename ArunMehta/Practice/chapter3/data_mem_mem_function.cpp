#include <iostream>
using namespace std;

class Employee{
    private:
        int id;
        string name;
        float salary;

    public:
        //function to set data members
        void setData(int eid, string eName, float eSalary){
            id = eid;
            name = eName;
            salary = eSalary;
        }
        // function to display employee information
        void displayData(){
            cout<<"Employee ID: "<<id<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Salary: "<<salary<<endl;
        }
};

int main(){
    Employee e1;
    e1.setData(100,"Arun Mehta", 50000.0); // set values
    e1.displayData(); // display employee details
}