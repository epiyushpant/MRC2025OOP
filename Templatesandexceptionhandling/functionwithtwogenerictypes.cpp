#include<iostream>
#include<string>
using namespace std;
template<class T1,class T2>
void display(T1 a,T2 b)
{
    cout<<a<<" "<<b<<endl;
}
int main()
{
    display(1999,"EBG");
    display(12.34,1234);
    return 0;
}