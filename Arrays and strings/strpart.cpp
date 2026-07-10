//strpart.cpp
//string used in widget part object
#include<iostream>
#include<cstring>
using namespace std;
class part{
    private:
        char partname[20];
        int partnumber;
        float cost;
    public:
        void setpart(char pname[],int pn,float c)
        {
            strcpy(partname,pname);
            partnumber=pn;
            cost=c;
        }
        void getpart()
        {
            cout<<"\nName:"<<partname;
            cout<<",part number:"<<partnumber;
            cout<<",cost=$"<<cost;
        }
};
int main()
{
    part part1,part2;
    part1.setpart("Avinab",4473,55.6);
    part2.setpart("Rijal",4455,65.5);
    
    cout<<"first part:";part1.getpart();
    cout<<"\nsecond part:";part2.getpart();
    return 0;
}