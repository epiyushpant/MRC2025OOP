#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num[]={56,75,22,18,90};
    int *ptr;
    int i;
    cout<<"The array values are:\n";
    for(i=0;i<5;i++)
        cout<<num[i]<<"\n";
    /*initializing the base address of str to ptr*/
    ptr=num;
    /*printing the value in the array*/
    cout<<"\nValue of ptr:"<<*ptr;
    cout<<"\n";
    ptr++;
    cout<<"\nvalue of ptr++:"<<*ptr;
    cout<<"\n";
    ptr--;
    cout<<"\nvalue or ptr--:"<<*ptr;
    cout<<"\n";
    ptr=ptr+2;
    cout<<"\nValue of ptr+2:"<<*ptr;
    cout<<"\n";
    ptr=ptr-1;
    cout <<"\nvalue of ptr-1:"<<*ptr;
    cout<<"\n";
    ptr+=3;
    cout<<"\nValue of ptr+=3:"<<*ptr;
    ptr -=2;
    cout<<"\n";
    cout<<"\nValue of ptr -=2:"<<*ptr;
    cout<<"\n";
    getch();
    return 0;
}