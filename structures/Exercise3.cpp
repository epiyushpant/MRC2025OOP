/*Create structure called volume that uses three variables of type distance (from the ENGLSTRC example)
to model the volume of room . INitialize variable of type volume oto speciofic dimension then calculate the 
volume ,It represents and print out re3sult. To calculate volume convert each dimensions from distance 
variable to variable of type float representing feet and fractions of foot then by multiply the resulting three numbers*/
#include<iostream>
using namespace std;
struct Distance{
    int feet;
    float inches;
};
int main()
{
    Distance d1={2,1};
    Distance d2 ={1,3};
    Distance d3={5, 12};

    float V=(d1.feet+d1.inches/12)*(d2.feet+d2.inches/12)*(d3.feet+d3.inches/12);
    cout<<"Volume is"<<V<<"cubic feet";
    return 0;
}