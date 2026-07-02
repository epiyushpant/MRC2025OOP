/*Write a function calles swap() that interchanges t wo int passed to it by calling the program
(Note that this function swaps the values of the variables in the calling program not those int the function)
You'll need to decide how to pass the arguments .Create a main() program to exercise the function*/
#include<iostream>
using namespace std;
void swap(int&,int&);
int main()
{
    int n1=2,n2=4;
    swap(n1,n2);
    cout<<"New:"<<n1<<" "<<n2<<endl;
    return 0;
}
void swap(int& num1,int& num2)
{
    int temp=num1;
    num1=num2;
    num2=temp;
}
