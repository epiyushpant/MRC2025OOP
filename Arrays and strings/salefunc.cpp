//salefunc.cpp
//passes array as argument
#include<iostream>
#include<iomanip>
using namespace std;
const int DISTRICTS=4;
const int MONTHS=3;
void display(double[DISTRICTS][MONTHS]); //declarations
int main()
{
    double sales[DISTRICTS][MONTHS]=
    {
    {1,2,3},
    {4,5,6},
    {7,8,9},
    {10,11,12}
};
display(sales);
cout<<endl;
return 0;
}
//display()
void display(double funsales[DISTRICTS][MONTHS])
{
    int d,m;
    cout<<"\n\n";
    cout<<"\t\t     month\n";
    cout<<"\t\t 1 \t 2 \t 3";
    for(d=0;d<DISTRICTS;d++)
    {
        cout<<"\nDistrict"<<d+1;
        for(m=0;m<MONTHS;m++)
        {
            cout<<setw(10)<<setiosflags(ios::fixed)
            <<setiosflags(ios::showpoint)<<setprecision(2)
            <<funsales[d][m];
        }
    }
    cout<<endl;
}