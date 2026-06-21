/*When the value is smaller than a field specified with setw() the unused location are by deault,
filled with spaces . The manipulator setfill() takes a single character as an argument and caused this character to be substituted for spaces in the empty parts of a field .Rewrite
WIDTH program so that the rcharacter on each line between the location name and population number are filled in with periods 
instead of spaces as in 
portcity.....2425785*/
#include<iostream>
#include<iomanip>
using namespace std;
int main() 
{
    cout<<setw(8)<<"portcity"<< setfill('.')<<setw(12) << 2425785<<endl; //setfill needs a single character constant
}