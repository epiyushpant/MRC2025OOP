//cardarray.cpp
//cards as objects
#include<iostream>
#include<cstdlib> //fro srand() ,rand()
#include<ctime>//fro time for srand()
using namespace std;
enum Suit{clubs,diamonds,hearts,spades};
//from 2 to 10 are integers without names
const int jack=11;
const int queen =12;
const int king = 13;
const int ace = 14;
class card {
    private:
        int number;
        Suit suit;
    public:
        card()
        { }
        void set(int n, Suit s)
        {
            suit = s;number =n;
        }
        void display();
};
void card::display()
{
    if (number>=2 && number <=10)
        cout<<number;
    else
        switch(number)
        {
            case jack:cout<<"j";break;
            case queen:cout<<"Q";break;
            case king: cout<<"k";break;
            case ace:cout<<"A";break;
        }
    
    switch(suit)
    {
        case clubs:cout<<"clubs";break;
        case diamonds:cout<<"Diamonds";break;
        case hearts:cout<<"Hearts";break;
        case spades:cout<<"spades";break;
    }
}
int main()
{
    card deck[52];
    int j;
    cout<<endl;
    for(j=0;j<52;j++)
    {
        int num=(j%13)+2;//cycles to 2 to 14 4 times
        Suit su=Suit(j/13); //cycles to to 3 13 times
        deck[j].set(num,su);
    }
    cout<<"\nOrdered deck:\n";
    for(j=0;j<52;j++)
    {
        deck[j].display();
        cout<<" ";
        if(!((j+1)%13)) //new line every 13 lines
        cout<<endl;
    }
    srand(time(NULL));
    for(j=0;j<52;j++)
    {
        int k = rand()%52;
        card temp=deck[j];
        deck[j]=deck[k];
        deck[k]=temp;
    }
    cout<<"\nshuffled deck:\n";
    for (j=0;j<52;j++)
    {
        deck[j].display();
        cout<<", ";
        if(!((j+1)%13))//newline every 13 cards
        cout<<endl;
    }
    return 0;
}