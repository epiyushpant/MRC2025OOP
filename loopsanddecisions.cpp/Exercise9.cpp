/*you have guests not less than chairs ,WAP to
calculate how many ways can guests be seated in the chairs*/
#include<iostream>
using namespace std;
int main()
{
    int G,C,elim,possi=1;
    cout<<"Enter no of guests:";cin>>G;
    cout<<"Enter no of chairs:"; cin>>C;
    elim= G-C;
    for (int j=G;j>elim;j--)
    {
        possi *=j;
    }
    cout<<"Number of ways guests can be seated is"<<possi<<endl;
    return 0;

}