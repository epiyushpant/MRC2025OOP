//endldisp.cpp
//objects using english measurements
#include<iostream>
using namespace std;

class Distance 
{
    private:
        int feet;
        float inches;
    public:
        void setdist(int ft,float in) //set distance to args
        {
            feet = ft;
            inches=in;
        }
        void getdist()
        {
            cout<<"Enter 2nd feet:";
            cin>>feet;
            cout<<"Enter 2nd inch:";
            cin>>inches;
        }    
        void showdist()
        {
            cout<<feet<<"\'-"<<inches<<"\"";
        }
};
int main()
{
    Distance dist1,dist2;
    dist1.setdist(11,6.25);
    dist2.getdist();
    cout<<"\ndist1= ";dist1.showdist();
    cout<<"dist2=";dist2.showdist();
    cout<<endl;
    return 0;
}