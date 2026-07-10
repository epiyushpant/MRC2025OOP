//sstrfind.cpp
//finding substrings in string objects
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="In xanada did kubla khan and stately pleasure dome decree";
    int n;
    n=s1.find("kubla");
    cout<<"found kubla at"<<n<<endl;
    
    n=s1.find_first_of("spde");
    cout<<"first of spde  at"<<n<<endl;

    n=s1.find_first_not_of("aeiouAEIOU");
    cout<<"first consonent at"<<n<<endl;
    return 0;
}