//static.cpp
//demonstrates static variables
#include<iostream>
using namespace std;
float getavg(float); //declaration
int main()
{
    float data=1,avg;
    while(data!=0)
    {
        cout<<"Enter a number";
        cin >>data;
        avg = getavg(data);
        cout<<"New average is"<<avg<<endl;
    }
    return 0;
}
    //get avg()
    //finds average of old plus new data
    float getavg(float newdata)
    {
        static float total=0; //static variables are initiallized
        static int count=0; //only once per program
        count++; //increment count
        total +=newdata;
        return total/count;

    }
