/*create a class called ship that incorporates a ship's number and location use approach in Exercise 8 to n umber each ship 
object as it is created. use two variables angle class from Exercise 7 to represent longitude and latitude .
A member function of the ship class should get a position from user and store it in object another should 
reportserial number and position .Write a main() program that creates three ships asks the user to input position
of each and display each ships no and position*/
#include<iostream>
using namespace std;
class position{
    private:
        int degrees;
        float minutes;
    public:
        position():degrees(0),minutes(0)
        { }
        position(int d,int m):degrees(d),minutes(m)
        { }
        void input(){
            char ch;
            cout<<"Enter location:";
            cin>>degrees>>ch>>minutes;
        }
        void display()
        {
            cout<<degrees<<"\xf8"<<minutes<<"\'";
        }
};
class address
{
    private:
        position posi;
        int number;
    public:
        address():posi(),number(0)
        { }
        address(position p,int n):posi(p),number(n)
        { }
        void inputposition()
        {
            cout<<"Enter number:";
            cin>>number;
            posi.input();  
        }
        void displayposition()
        {
        cout<<number;
        posi.display();
     }
};
int main()
{


address s1;
address s2;
address s3;
s1.inputposition();
s2.inputposition();
s3.inputposition();

s1.displayposition();
s2.displayposition();
s3.displayposition();

return 0;
}