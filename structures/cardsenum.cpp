//cardenum.cpp
//demonstrates enumerations
#include<iostream>
using namespace std;

const int jack=11; //2 through 10 are unnamed intgers
const int queen =12;
const int king = 13;
const int ace = 14;

enum suit{clubs,diamonds,hearts,spades};

struct card {
    int number;
    suit suit;
};
int main()
{
    card temp,chosen,prize;
    int position;
    card card1={7,clubs}; //initialize card 1
    cout<<"Card is 7 of clubs\n";

    card card2={jack,hearts};
    cout<<"Card is jack of hearts\n";
    
    card card3={ace,spades}; 
    cout<<"Card is ace of spades\n";

    prize = card3;

    cout<<"\nI'm swapping card 1 and card 3";
    temp=card3;card3=card1;card1=temp;

    cout<<"\nI'm swapping card 2 and card 3";
    temp=card3;card3=card2;card2=temp;

    cout<<"\nI'm swapping card 1 and card 2";
    temp=card2;card2=card1;card1=temp;

    cout<<"nNow Where,(1,2,3) is ace of spades?";
    cin>>position;

    switch(position)
    {
        case 1: card1; break;
        case 2: card2;break;
        case 3: card3;break;
    }
    if(chosen.number==prize.number&&chosen.suit==prize.suit)
    {
        cout<<"What's right you win!\n";
    }
    else
    {
        cout<<"Sorry. You lose\n";
    }
return 0;
}