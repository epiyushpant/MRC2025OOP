//wdcount.cpp
//demonstrates enums,counts word in phrase
#include<iostream>
using namespace std;
#include<conio.h>//for getche()

enum itsaWord{NO,YES}; //NO=0 , YES=1
int main() 
{
    itsaWord isWord =NO; //YES when in word 
                        //NO when in whitespace
    char ch='a'; //character read from keyboard
    int wordcount=0; //number of words read

    cout<<"Enter a phrase\n";
    do {
        ch=getche(); //get character
        if (ch == ' ' || ch=='\r') //if whitespace,
        {
            if (isWord==YES) //and doing a word
            {
                wordcount++;
                isWord=NO; //reset flag
            }
        }
        else
        if (isWord==NO) //if start of Word,
            isWord=YES; //then set flag
    }while(ch!='\r'); //Quit on Enter key
    cout<<"\n...Word Count is "<<wordcount<<"...\n";
    return 0;
}