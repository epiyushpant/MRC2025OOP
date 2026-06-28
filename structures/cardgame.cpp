#include<iostream>
using namespace std;

const int clubs=0; //suits
const int diamonds =1; 
const int hearts = 2;
const int spades = 3;

const int jack = 11; // Face cards
const int queen = 12;
const int king = 13;
const int Ace = 14;

struct card
{
int number; //2 to 10 ,jack queen king ace
int suits; //clubs,diamonds,hearts,spade
};

int main()
{
    card temp,chosen,prize; //define cards
    int position;

    card card1 = {7,clubs}; //initialize card 1
    cout<<"Card 1 is 7 of clubs\n";
    
    card card2 = {jack,hearts}; //initialize card 2
    cout<<"Card 2 is jack of hearts\n";

    card card3 ={Ace,spades} ; //initialize card 3
    cout<<"Card 3 is Ace of spades\n";

    prize = card3; //copy this card to rememberit

    cout<<"I'm swapping card 1 and card 3\n";
    temp=card3; card3=card1;card1=temp;

    cout<<"I'm swapping card 2 and card 3\n";
    temp=card2;card2=card3;card3=temp;

    cout<<"I'm swapping card 1 and card 2\n";
    temp=card1;card2=card1;card2=temp;

    cout<<"Now ,Where(1,2 or 3) is the ace of spades?";
    cin>>position;

    switch(position)
    {
        case 1:chosen=card1;break;
        case 2:chosen=card2;break;
        case 3:chosen=card3;break;
    }
    if((chosen.number = prize.number) && (chosen.suits==prize.suits))
    cout<<"That's right! You win! \n";
    else
    cout<<"Sorry, You lose\n";
    return 0;
}
