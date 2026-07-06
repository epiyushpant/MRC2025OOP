//smallobj.cpp
//demonstrates a small simple object
#include<iostream>
using namespace std;
class smallobj //define class 
{
private:
int somedata;
public :
void setdata(int d)
{
    somedata = d;
}
void showdata() //member function to display data
{
    cout<<"Data is:"<<somedata<<endl;
}
};
int main()
{
    smallobj s1,s2;
    s1.setdata(1066);
    s2.setdata(1776);

    s1.showdata();
    s2.showdata();
    return 0;
}