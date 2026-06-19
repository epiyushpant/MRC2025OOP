#include<iostream> //for using objects like cout 
using namespace std; // for namespace to avoid use of std several times

int main() //main function declaration
{
	int signedvar; // defining variable
	unsigned int unsignvar; // defining variable
	
	signedvar = 1500000000; //assigning value to variable
	unsignvar = 1500000000;//assigning value to variable
	
	signedvar =(signedvar *2) / 3; //statement formed by expressions 
	unsignvar = (unsignvar*2) /3; //statement formed by expressions
	
	cout <<"value of signed var" << signedvar <<endl; //printing it is an error value exceeds the range
	cout<<"value of unsigned var" << unsignvar << endl;//printing unsignedvar value lies within the range
	return 0 ; // return statement	
}

