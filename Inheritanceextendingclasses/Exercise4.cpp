#include<iostream>
#include<cstring>
using namespace std;
class staff
{
    protected:
        int code;
    public:
        staff():code(0)
        { }
        staff(int c)
        {
            code=c;
        }
};
class teacher:virtual public staff
{
    protected:
        char subject[20];
    public:
        teacher(char s[],int c):staff(c)
        {
            strcpy(subject,s);
        }
};
class officer:virtual public staff
{
    protected:
        int grade;
    public:
        officer(int g,int c):staff(c)
        {
            grade=g;
        }
};
class education:public teacher,public officer
{
    protected:
        char eduqual[20];
        char profqual[20];
    public:
       education (int c,char sub[],int grade,char eq[],char pq[]):staff(c),teacher(sub,c),officer(grade,c)
       {
        strcpy(eduqual,eq);
        strcpy(profqual,pq);
       }
       void displaydata()
       {
        cout<<code<<" "<<grade<<" "<<subject<<" "<<eduqual<<" "<<profqual<<endl;
       }
};
int main()
{
education e{5,"Math",10,"Bachelor","programmer"};
e.displaydata();
return 0;
}