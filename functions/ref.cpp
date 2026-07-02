//ref.cpp
//demonstrates passing by reference
#include<iostream>
using namespace std;

int main() 
{
    void intfrac(float,float&,float&); //declaration
    float number,intpart,fracpart; //float variables
    do{
        cout<<"\nEnter a real numbr:"; //number form user
        cin>>number;
        intfrac(number,intpart,fracpart); //find int part and fraction part
        cout<<"\nInteger part is"<<intpart
        <<",fraction part is"<<fracpart<<endl;
    }while(number !=0.0); //Exit loop on 0.0
    return 0;
}
//intfrac()
//finds integer and fractional part of real number
void intfrac(float n ,float& intp,float& fracp)
{
    long temp=static_cast<long>(n); //convert to long
    intp=static_cast<float>(temp) ;//back to float
    fracp=n-intp;
}