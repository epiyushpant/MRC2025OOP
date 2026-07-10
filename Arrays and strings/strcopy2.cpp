//strcopy2.cpp
//copies strings using strcpy() function
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str1[]="Tiger"
                " In the woods";
    const int MAX=20;
    char str2[20];
    strcpy(str2,str1);
    cout<<str2;
    return 0;
}