/*Write a function that ,when you call it displays a message telling how many times it had been called
"I have been called three times", for instance Write a main() program that calls this function
at least 10 times .Try implementing this function in two different ways.first use global variable to store
count .second use local static variable which is more appropriate?Why can't you use local variables
*/
#include<iostream>
using namespace std;
void called();
int count=0;
int main()
{
    for(int j=0;j<10;j++)
    {
        called();
    }
    cout<<"I have been called "<<count<<  "times";
    return 0;
}
void called()
{
    count++;
    
}
