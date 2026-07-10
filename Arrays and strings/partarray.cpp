//partarray.cpp
//structure variables as array elements
#include<iostream>
using namespace std;
const int SIZE=4;
struct part
{
    int modelnumber;
    int partnumber;
    float cost;
};
int main()
{
    part apart[SIZE];
    int n;
    for(n=0;n<SIZE;n++)
    {
        cout<<"Enter model number:";
        cin>>apart[n].modelnumber;
        cout<<"Enter part number:";
        cin>>apart[n].partnumber;
        cout<<"Enter cost:";
        cin>>apart[n].cost;
    }
    for(n=0;n<SIZE;n++)
    {
        cout<<"\nmodel "<<apart[n].modelnumber;
        cout<<"\npart number "<<apart[n].partnumber;
        cout<<"\ncost "<<apart[n].cost;
    }
    return 0;
}
