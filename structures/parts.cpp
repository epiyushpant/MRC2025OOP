//parts.cpp
//uses parts inventory to demonstrate structures
#include<iostream>
using namespace std;

struct part 
{
int modelnumber; //ID of a widget
int partnumber;//ID no of widget part
float cost;//cost of part
};

int main() 
{
    part part1; //define a structure variable
    part1.modelnumber = 6244; //give value to structure member
    part1.partnumber = 372;
    part1.cost = 217.55F;
    //displays structure member
    cout<<" model "<<part1.modelnumber;
    cout<<" ,part " << part1.partnumber;
    cout<<", costs "<<part1.cost<<endl;
    return 0;
}