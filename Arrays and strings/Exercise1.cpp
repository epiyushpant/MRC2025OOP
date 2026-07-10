//reversit.cpp
//demonstrates function that reverses the string
#include<iostream>
using namespace std;
#include<cstring>
void reversit(char ch[])
{
    char c[80];
    for(int j=0;j<(strlen(ch)/2);j++)
    {
        char temp=ch[j];
        ch[j]=c[strlen(ch)-j-1];
        c[strlen(ch)-j-1]=temp;
    }
    cout<<c<<endl;
}
int main()
{
    char character[]="Able was I ere I saw Elba";
    reversit(character);
    return 0;
}
//outputis ablE i was I ere I saw elbA *reverse