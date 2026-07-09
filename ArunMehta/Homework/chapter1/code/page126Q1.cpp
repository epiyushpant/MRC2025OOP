#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    /*
        1. Assume that you want to generate a table of multiples of any
        given number. Write a program that allow the user to enter the number
        and then generates the table, formatting it into 10 columns and 20 lines.
        Interaction with the program should look like this (only the first three lines shown):
         7   14  21  28   35   42   49   56  63   70
        77   84  91  98  105  112  119  126 133  140
       147  154 161 168  175  182  189  196 206  210
    */
    int num, i, j, multipyBy=1;
    int cols = 10;
    int rows = 20;

    cout<<"Enter a number:";
    cin>>num;

    for(i = 1; i<=rows; i++){

        for(j = 1; j<=cols; j++){
            cout<<"\t"<<num * multipyBy; 
            multipyBy++;
        }
        cout<<endl;

    }

    system("pause");

    return 0;
}