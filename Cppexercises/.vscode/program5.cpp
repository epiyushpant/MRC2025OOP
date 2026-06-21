/*A library function ,islower takes a single character (a letter) as an argument
and returns a non zero integer if the letter is lowercase,or zero if it is uppercase, This
function requires header file ctype.h .WAP that allows the user to enter a letter
and then display either zero or nonzero depending on whether zero or nonzero depending on whether lowercase of uppercase letter
was entered (see sqrt program for clues)*/
#include<iostream>
#include<ctype.h>
using namespace std;
int main() {
    bool one_or_zero , a;
    cout<<"Enter a character";
    cin>>a;
    one_or_zero = islower(a); //islower is assigned to another variable 
    cout<<one_or_zero <<endl;
    return 0;
}