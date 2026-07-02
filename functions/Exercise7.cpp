/*find power that works with char,int,float,long and double see exercise 2*/
#include<iostream>
using namespace std;
void power(double number,int power);
void power(char number,int power);
void power(int number,int power);
void power(long number,int power);
void power(float number,int power);
int main()
{
    int p;
    char ch;
    double d;
    int i;
    float x;
    long l;

    cout<<"Enter power:";
    cin>>p;

    cout<<"Enter a double:";
    cin>>d;
    power(d,p);

    cout<<"Enter a character:";
    cin>>ch;
    power(ch,p);

    cout<<"Enter a integer:";
    cin>>i;
    power(i,p);

    cout<<"Enter a float:";
    cin>>x;
    power(x,p);

    cout<<"Enter a long:";
    cin>>l;
    power(l,p);
return 0;
}
void power(double number ,int power)
{
    double result=1.0;
    for (int j=1;j<=power;j++);
    {
        result*=number;
    }
    cout<<result;
}
void power(char number, int power)
{
    double result = 1.0;
    for (int j = 1; j <= power; j++) {
        result *= number;
    }
    cout << result << endl;
}

void power(int number, int power)
{
    double result = 1.0;
    for (int j = 1; j <= power; j++) {
        result *= number;
    }
    cout << result << endl;
}

void power(float number, int power)
{
    double result = 1.0;
    for (int j = 1; j <= power; j++) {
        result *= number;
    }
    cout << result << endl;
}
void power(long number, int power)
{
    double result = 1.0;
    for (int j = 1; j <= power; j++) {
        result *= number;
    }
    cout << result << endl;
}
