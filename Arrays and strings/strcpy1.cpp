//strcpy1.cpp
//copies a string using a for loop
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str1[]="captain oh captain"
                " our fearful trip is finished";

    const int MAX=80;
    char str2[MAX];
    int j;
    for(j=0;j<strlen(str1);j++)
        {str2[j]=str1[j];}
    str2[j]='\0';
    cout<<str2<<endl;
    return 0;
}