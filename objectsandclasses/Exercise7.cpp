/*In a ocean navigation systerm , locations are measured in degrees and minutes in format 179°59.9'W
create an angle class for degrees minutes and direction create a three argument constructor ,obtain 
angle and display them*/
#include<iostream>
using namespace std;

class Angle{
    private:
        int degree;
        float minute;
        char lnlt;
    public:
        Angle():degree(0),minute(0),lnlt(' ')
        { }
        Angle(int d,float m,char c):degree(d),minute(m),lnlt('c')
        { }
        void input(){
            char ch;
            cout<<"Enter direction:";
            cin>>degree>>ch>>minute>>ch>>lnlt; //use alt+248 for degrees
        }
        void output()
        {
            cout<<degree<<"\xf8"<<minute<<"\'"<<lnlt;
        }
};
int main()
{
    Angle A;
    A.input();
    A.output();
    return 0;
}