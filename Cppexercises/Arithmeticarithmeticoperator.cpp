//assign.cpp
//demonstrates arithmetic assignment operator
#include<iostream>
using namespace std;

int main()
{
    int ans = 27;
    ans += 10; // same as ans + 10
    cout<<ans <<",";
    ans -=7;
    cout<< ans <<",";
    ans *=3;
    cout << ans <<",";
    ans /=3;
    cout<<ans<<",";
    ans %=3;
    cout<<ans<<endl;
    return 0;
}