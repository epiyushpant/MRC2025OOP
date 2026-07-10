//salemon.cpp
//displays sales chart using 2-d array
#include<iostream>
#include<iomanip> //for setprecision etc
using namespace std;

const int DISTRICT=4;
const int MONTH=3;
int main()
{
    int d,m;
    double sales[DISTRICT][MONTH]; //Two dimensional array
    cout<<endl;
    for(d=0;d<DISTRICT;d++)
        {
            for(m=0;m<MONTH;m++)
            {
                cout<<"Enter sales for district"<<d+1;
                cout<<",month"<<m+1<<":";
                cin>>sales[d][m];
            }
        }
        cout<<"\n\n";
cout<<"\t\t Month\n";
cout<<"\t 1 \t 2 \t 3";
for (d=0; d<DISTRICT; d++)
{cout<<"\nDistrict"<<d+1;
for(m=0; m<MONTH; m++)
{
    cout<<setiosflags(ios::fixed)
        <<setiosflags(ios::showpoint)
        <<setprecision(2)
        <<setw(10)
        <<sales[d][m];//get the number
}
}
cout<<endl;
return 0;

}