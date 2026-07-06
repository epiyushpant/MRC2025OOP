/*create a class that imitates part of the functionality of the basic data type int.
call the class Int (note different capitalization .The only data in this calss is an int variable
include member function to initialize an int to 0.to initialize it to an int value to display it (it 
looks like an int and to add two int value))
Wap that exercises this class by creating one initialized and tow initialized int values adding 
the two initialized values and placing the response in uninitialized value and displaying this result*/
#include<iostream>
using namespace std;

class Int
{
    private:
        int a;
    public:
        Int():a(0)
        { }
       Int(int x):a(x)
       { }
        void disp_value()
        {
            cout<<a;
        }
        Int addvalues(Int a ,Int b);
};
Int Int::addvalues(Int a,Int b)
{
    Int c;
    c=a.a + b.a;
    return c;
}
int main()
{
    Int aa(2);
    Int bb(3);
    Int cc;
    cc=aa.addvalues(aa,bb);
    cc.disp_value();
    return 0;
}
