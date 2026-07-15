#include<iostream>
using namespace std;
class A
{
    int i;
};
class AB:virtual A 
{
    int j;
};
class AC: virtual A 
{
    int k;
};
class ABAC:public AB,public AC
{
    int l;
};
int main()
{
    ABAC abac;
    cout<<"size of ABAC:"<<sizeof(abac);
    return 0;
}