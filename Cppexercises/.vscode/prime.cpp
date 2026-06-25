//prime.cpp
//demonstrate if statements with prime numbers
#include<iostream>
#include<process.h> //for exit
using namespace std;
int main() 
{
    unsigned long n,j;
    cout<<"Enter a number";
    cin>>n; //gets number from user
    for(j=2;j<=n/2;j++) //divide every integer from 2 on up;
    if (n%j==0)
    {
        cout<<"it is not prime; divisible by" <<j <<endl;
        exit(0);
    }
cout<<"It's prime\n";
return 0;

}