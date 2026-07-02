/*Write a function called zeroSmaller() that is passed two 
int arguments by reference and then sets the smaller of the two numbers to 0
Write a main() program to exercise this function.*/
#include<iostream>
using namespace std;
void zerosmaller(int&,int&);
int main()
{
    int n1,n2;
    cout<<"Enter first number:";cin>>n1;
    cout<<"Enter second number:";cin>>n2;
    zerosmaller(n1,n2);
    cout<<"After:"<<n1<<" "<<n2;
    return 0;
}
void zerosmaller(int& numb1,int& numb2){
    if(numb1<numb2)
        numb1=0;
    else 
        numb2=0;
}