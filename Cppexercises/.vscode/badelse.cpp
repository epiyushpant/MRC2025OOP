//badelse.cpp
//demonstrates Else matched with wrong if
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter Three numbers a,b and c:\n";
    cin>>a>>b>>c;
if (a==b)
    if(b==c)
    {
        cout<<"a,b and c are same\n";    
    }
    else
    {
        cout<<"b and c are different"; // This else is corrected if(b==c) needs to have it's own matching else
    }
else {
    cout<<"a and b are different\n"; //if not corrected this won't print and shows nothing if a=2 and b=3 is entered
}
return 0;
}
//corrected matching else example