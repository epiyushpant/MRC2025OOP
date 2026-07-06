//englconst.cpp
//constant member functions and const arguments to member functions
#include<iostream>
using namespace std;
class Distance
{
    private:
        int feet;
        float inches;
    public:
        Distance():feet(0),inches(0) //constructor no arguments
        {}
        Distance(int ft,float in): feet(ft),inches(in)
        {}
    void get_dist()
    {
        cout<<"Enter feet:";cin>>feet;
        cout<<"Enter inches:";cin>>inches;
    }
    void show_dist() const 
    {
        cout<<feet<<"\"-"<<inches<<"\"";
    }
    Distance add_dist(const Distance& d2) const ;
};
Distance Distance::add_dist(const Distance& d2) const 
{
    Distance temp;
    /*feet=0; //can't modify ths feet and d2.feet
    d2.feet=0;*/ 
    temp.inches = inches + d2.inches;
    if(temp.inches>=12.0)
    {
        temp.inches-=12;
        temp.feet=1;
    }
    temp.feet+=feet+d2.feet; //add 
    return temp;
}
int main()
{
    Distance dist1,dist3;
    Distance dist2(11,6.25);
    dist1.get_dist();
    dist3=dist1.add_dist(dist2);
    cout<<"\ndist 1=";dist1.show_dist();
    cout<<"\ndist 2=";dist2.show_dist();
    cout<<"\ndist 3=";dist3.show_dist();
    cout<<endl;
    return 0;
}