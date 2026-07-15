#include<iostream>
#include<cstring>
using namespace std;
class staff
{
    protected:
        int codename;
    public:
        staff():codename(0)
        { }
        staff(int c)
        {
            codename=c;
        }
        void displaystaff()
        {
            cout<<codename;
        }

};
class teacher :public staff
{
    protected:
        char subject[20];
    public:
        teacher(char su[])
        {
            strcpy(subject,su);
        }
        void displaysubject()
        {
            cout<<subject;
        }
};
class typist:public staff
{
    protected:
        float speed;
    public:
        typist(float s )
        {
            speed =s;
        }
        void displayspeed()
        {
            cout<<speed;
        }
};
class officer :public staff
{
    protected:
        int grade;
    public:
        officer(int g)
        {
            grade=g;
        }
        void displaygrade()
        {
            cout<<grade;
        }
};
class regular:public typist
{
    protected:
        float wages;
    public :
        regular(float wa,float s):typist(s)
        {
            wages=wa;
        }
    void displayregular()
    {
        cout<<wages<<" "<<speed;
    }
};
class casual:public typist
{
    protected:
        float wages;
    public:
        casual(float w,float s):typist(s)
        {
            wages=w;
        }
        void displaycasual()
        {
            cout<<wages<<" "<<speed<<endl;
        }
};
int main()
{
staff s(45);
s.displaystaff();
teacher su("Math");
su.displaysubject();
officer g(5);
g.displaygrade();
typist t(67);
t.displayspeed();
casual c(45,67);
c.displaycasual();
regular r(2000.0,50);
r.displayregular();
return 0;
}
