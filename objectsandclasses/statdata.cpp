//statdata.cpp
//static class data
#include<iostream>
using namespace std;
class foo
{
    private:
        static int count;
    public:
        foo()
        {count ++;}
        int get_count()
        {return count;}
};
int foo::count=0;
int main()
{
    foo f1,f2,f3; //create three objects
    cout<<"count is"<<f1.get_count()<<endl; //Each object
    cout<<"count is"<<f2.get_count()<<endl; //sees the
    cout<<"count is"<<f3.get_count()<<endl; //same value
    return 0;
}