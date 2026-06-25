//showprim.cpp
//displays prime number distributions
#include<iostream>
using namespace std;
#include <conio.h>

int main()
{
    unsigned char WHITE=219; //solid colors (prime)
    unsigned char gray=176; //gray non primes
    unsigned char ch;
    for (int count = 0; count < 80*25-1; count++)
    {
        ch = WHITE; //assume it's prime
        for (int j=2; j<count;j++)
        {
            if (count%j==0) // if rem = 0 not prime
            {
                ch = gray; //it's not prime
                break;
            }
        }
        cout<<ch;
    }
    getche();
    return 0;
}