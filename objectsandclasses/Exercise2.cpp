/*Imagine a tollbooth at a bridge,cars passing by the booth are expected to pay a 50 cent 
toll .Mostly they do, but simetimes a car goes by without paying .The tollbooth keeps track 
number of cars that have gone by.and of the total amount of money collected. Model this toll
booth with class toll booth .The two data item are a type unsigned int to hold the total numbers 
of cars and type double to hold the total amount of money collected.A construcotor initializes both
of these to 0 . A member function is called payingCar() , increments the car total and adds 0.50
to the cash total Another function nonpayingcar() increments the car total but adds nothing to the 
cash total finally a member function called display displays the two total make appropriate member function 

Include program to test this class . This program should allow the user to push one key to count a paying car and
another to count non paying car . pushing the Esc key should cause the progrma to print out the total cars 
and total cash and then exit*/
#include<iostream>
using namespace std;
#include<conio.h>
const char ESC=27;
const double TOLL=0.50;
class tollbooth
{
    private:
        unsigned int cars;
        double cash;
    public:
        tollbooth():cars(0),cash(0)
        { }
        tollbooth(unsigned int car, double cas):cars(car),cash(cas)
        { }
        void nonpayingcars()
        {
            cars++;
        }
        void payingcars()
        {
            cars++;
            cash +=TOLL;
        }
        void display()
        {
            cout<<"\ncars="<<cars;
            cout<<"\ncash="<<cash;
        }
    };
int main()
{
    tollbooth booth;
    char ch;
    cout<<"\nEnter a for non paying cars";
    cout<<"\nEnter b for paying cars";
    cout<<"\nEnter esc for total\n";
    
    do{
        ch=getche();
        if(ch=='a')
        { booth.nonpayingcars();}
        if (ch=='b')
        {booth.payingcars();}
    }while(ch != ESC);
    booth.display();
}