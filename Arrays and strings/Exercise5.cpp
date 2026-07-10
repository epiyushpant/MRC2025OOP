/*start with fraction class from  Exercise 11 and 12 from chapter 6 .Write a main() program that 
obtains an arbitary number of fraction from the user stores them in an array of type fraction
averages them and displays them*/
#include<iostream>
using namespace std;
class fraction{
    private:
        int numerator;
        int denominator;
        int n;
    public:
        fraction():numerator(0),denominator(1)
        { }
        fraction(int no, int d):numerator(no),denominator(d)
        {
         
        }
        void getfraction()
            {
                char ch;
                int n;
                cout<<"Enter how many fractions:";
                cin>>n;
                for(int j=0;j<n;j++)
                {
                    cout<<"Enter fraction:";
                    cin>>numerator>>ch>>denominator;
                }
            }
        void getaverage()
        {
            double add=0;
            for (int j=0;j<n;j++){
            double div=numerator/denominator;
            add = add+div;
            }
            double avg=add/n;
            cout<<avg;
        }

};
int main()
{
    fraction f1;
    f1.getfraction();
    f1.getaverage();
    return 0;
}