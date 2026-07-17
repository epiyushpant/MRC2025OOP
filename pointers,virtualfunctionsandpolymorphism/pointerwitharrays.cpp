#include<iostream>
using namespace std;
int main()
{
    int number[50],*ptr;
    int n,i;
    cout<<"\nEnter the count\n";
    cin>>n;
    cout<<"\nEnter the numbers one by one\n";
    for(i=0;i<n;i++)
    {
        cin>>number[i];
    }
    /*Assigning the base address of numbers to ptr and initializing 
    the sum to 0*/
    ptr=number;
    int sum=0;
    /*check out for even inputs and sum them up*/
    for(i=0;i<n;i++)
    {
        if(*ptr%2==0)
            sum+=*ptr;
        ptr++;
    }
    cout<<"\n\nSum of even numbers:"<<sum;
    return 0;
}