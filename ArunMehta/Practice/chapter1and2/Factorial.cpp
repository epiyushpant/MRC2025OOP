#include <iostream>
using namespace std;

int main()
{
    int i=1, n, factorial =1;

    cout<<"Enter a number: ";
    cin>>n;

    //use for loop
    /*for(i=1; i<=n;i++)
    {
        factorial *=i;
    }*/

    //user while loop
    while(i<=n)
    {
        factorial *=i;
        i++;
    }
    cout<<"Factorial of " << n << " is : " <<factorial<<endl;

    return 0;
}