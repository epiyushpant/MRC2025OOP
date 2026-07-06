//counter.cpp
//object represents a counter variables
#include<iostream>
using namespace std;

class counter{
    private :
        unsigned int count;
    public:
    counter():count(0) //constructor
    {/*empty body*/}
    void inc_count()
    {count++;}
    int get_count()
    {
        return count;
    }
};
int main()
{
    counter c1,c2; //define and initialize
    cout<<"\nC1="<<c1.get_count(); //display
    cout<<"\nC2="<<c2.get_count();

    c1.inc_count();
    c2.inc_count();
    c2.inc_count();

    cout<<"\nC1="<<c1.get_count();//display again
    cout<<"\nC2="<<c2.get_count();

    cout<<endl;
    return 0;
}