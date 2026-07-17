#include<iostream>
#include<cstring>
#include<conio.h>
#include<ctype.h>
using namespace std;
int main()
{
    int i=0;
    char *ptr[10]=
    {
        "books",
        "television",
        "computer",
        "sports",
    };
    char str[25];
    cout<<"\n\nEnter your favorite leisure pursuit";
    cin>>str;
    for(i=0;i<4;i++)
    {
        if(!strcmp(str, ptr[i]))
        {
            cout<<"\n\nYour favorite pursuit"<<"is available here"<<endl;
            break;
        }
    }
        if(i==4)
        {
            cout<<"\n\nYour favorite"<<"not available here"<<endl;
        }
    
    getch();
    return 0;
}