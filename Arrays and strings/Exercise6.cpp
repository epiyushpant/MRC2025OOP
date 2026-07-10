//make 4 players and assign them 13 cards each
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
enum Suit{clubs,diamonds,hearts,spades};
//2 to 10 are just numbers
const int jack=11;
const int queen=12;
const int king=13;
const int Ace=14;

class card
{
    private:
        int number;
        Suit suit;
    public:
        card()
        {}
        void set(int n,Suit s)
        {number=n;
        suit=s; }
        void display();
};
void card::display()
{
    if(number>=2 && number<=10)
        cout<<number;
    else 
        switch(number)
            {
                case jack:cout<<"j";break;
                case queen:cout<<"q";break;
                case king:cout<<"k";break;
                case Ace:cout<<"A";break;
            }
    switch(suit)
    {
        case clubs:cout<<"C";break;
        case diamonds:cout<<"D";break;
        case hearts:cout<<"H";break;
        case spades:cout<<"S";break; 
    }

};
int main()
{
    card deck[52];
    int j;
    cout<<endl;
    for ( j=0;j<52;j++)
    {
        int num=(j%13)+2 ;//cycles 2 to 14 4 times
        Suit su=Suit(j/13); //cycles 0 to 4 13 times
        deck[j].set(num,su);
    }
    cout<<"Ordered deck:\n";
    for(j=0;j<52;j++)
    {
        deck[j].display();
        cout<<" ";
        if(!(j+1)%13)//new line every 13 cards
        cout<<endl;
    }
srand (time(NULL));
for(j=0;j<52;j++)
{
    int k = rand()%52;
    card temp=deck[j];
    deck[j]=deck[k];
    deck[k]=temp;
}
cout<<"\ncard to 4 players:\n\n";
for(int player=0;player<4;player++)
{
    cout<<"\nPlayer"<<player+1<<":\n";
    for(int cardNo=0;cardNo<13;cardNo++)
    {deck[player*13+cardNo].display();
    cout<<" ";}
}
cout<<"\n\n";
return 0;
}