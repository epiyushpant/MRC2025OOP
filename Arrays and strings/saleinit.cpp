//saleinit.cpp
//displays sales chart ,initializes 2-d array
#include<iostream>
#include<iomanip>
using namespace std;

const int districts=4;
const int months=3;

int main()
{
    int d,m;
    double sales[districts] [months]
    ={ {1,2,3},
        {1,2,3},
        {1,2,3},
        {1,2,3}
    };
    cout<<"\n\n";
    cout<<"\t\t Month\n";
    cout<<"\t\t 1 \t 2 \t 3";
    for(d=0;d<districts;d++)
    {
        cout<<"\nDistrict"<<d+1;
        for(m=0;m<months;m++)
        {
            cout<<setw(10)<<setiosflags(ios::fixed)
            <<setiosflags(ios::showpoint)<<setprecision(2)
            <<sales[d][m];
        }
    }
    cout<<endl;
    return 0;
}