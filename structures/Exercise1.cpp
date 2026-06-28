/*A phone number,such as (217) 767-8900 can be thougnt of as havinb three parts: the area code
(212), the exchange(767) and teh nubmer(8900) .WAP that uses a structure to store these 
parts of a phone number separetly call the structure phone. Create two structure variable of type phone 
Initialize one and have the user input a number for the other one .Then display
both numbers. The interchange might look like this
Enter your area code, exchange and number:415 555 1212
My number is (212) 767-8900
Your number is (415) 555-1212*/
#include<iostream>
using namespace std;
struct phone{
int area;
int exchange;
int number;
};

int main()
{
    phone phone1={212,767,8900};
    phone phone2;
    cout<<"Enter your area,exchange and number:"<<endl;
    cin>>phone2.area>>phone2.exchange>>phone2.number;
    cout<<"My Number is "<<"("<<phone1.area<<")"<<" "<<phone1.exchange<<"-"<<phone1.number;
    cout<<"\nYour NUmber is"<<"("<<phone2.area<<")"<<" "<<phone2.exchange<<"-"<<phone2.number;
    return 0;
}
