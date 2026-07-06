//objpart.cpp
//widget part as an object
#include<iostream>
using namespace std;

class part 
{
    private:
        int modelnumber;
        int partnumber;
        float cost;
    public:
        void setpart(int mn,int pn, int c)
        {
            modelnumber=mn;
            partnumber=pn;
            cost = c;
        }
        void displaypart()
        {
            cout<<"model "<<modelnumber<<endl;
            cout<<"partnumber "<<partnumber<<endl;
            cout<<"cost "<<cost<<endl;
        }
};
int main()
{
    part part1;
    part1.setpart(6244, 373, 217.55); // call member functions
    part1.displaypart();
    return  0;
}