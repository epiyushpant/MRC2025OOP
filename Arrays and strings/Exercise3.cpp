//Exercise 3.cpp
//average of distances //array of objects
#include<iostream>
using namespace std;
const int MAX=3;
class Distance
{
    private:
        int feet;
        float inches;
    public:
        Distance()
        {}
        Distance(int f,float i):feet(f),inches(i)
        { 
            f=feet;
            i=inches;
        }
        void display()
        {
            cout<<"Enter feet:";
            cin>>feet;
            cout<<"Enter inches:";
            cin>>inches;
        }
        void add(Distance d1)
        {
            feet=feet+d1.feet;
            inches=inches+d1.inches;
        }
        void average(Distance dd1)
        {
            dd1.add(dd1);
            
            if (inches>=12)
                {
                    feet++;
                    inches -=12;
                }   
        cout<<"average is"<<feet<<"\'-"<<inches<<"\""; 
        }
       
};
int main(){
Distance ddd1[MAX];
for(int j=0;j<MAX;j++)
{
    ddd1[j].display();
}
for (int j=0;j<MAX;j++)
{
    ddd1[j].average(ddd1[j]);
}
return 0;
}