/*Draw a pyramid with 20 rows which looks like
        x
    x   x  x
x   x   x* x    x
with 20 rows */
#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    for(i=1;i<=20;i++)//for rows
    {
        for(j=1;j<=20-i;j++) //for column which has 20 spaces then x
        {
            cout<<" ";
        }
        for(k=1;k<=2*i-1;k++) 
        {
            cout<<"x";
        }
        cout<<endl;
    }
    return 0;
}