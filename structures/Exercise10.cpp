/*convert new pounds system to ole system using structures*/
#include<iostream>
using namespace std;

struct sterling
{
    int pounds;
    int shillings;
    int pence;
};
int main()
{
    double p;
    sterling st1;
    st1.pounds=0;
    st1.shillings=0;
    st1.pence=0;
    cout<<"Enter your money";
    cin>>p;
    int totalpence = p*240;

    st1.pounds=totalpence/240;
    totalpence = totalpence%240;

    st1.shillings = totalpence/12;
    st1.pence = totalpence%12;

    cout<<st1.pounds<<"."<<st1.shillings<<"."<<st1.pence;
    return 0;
}