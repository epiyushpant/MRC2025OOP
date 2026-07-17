#include<iostream>
#include<cstring>
using namespace std;
class media
{
    protected:
        char title[50];
        float price;
    public:
        media(char *s,float a)
        {
            strcpy(title,s);
            price = a;
        }
        virtual void display() { };
};
class book:public media
{
    int pages;
    public:
        book(char *s,float a,int p):media(s,a)
        {
            pages=p;
        }
        void display();
};
class tape:public media
{
    float time;
    public:
        tape(char *s,float a,float t):media(s,a)
        {
            time=t;
        }
        void display();
};
void book::display()
{
    cout<<"\nTitle:"<<title;
    cout<<"\nPages:"<<pages;
    cout<<"\nPrice:"<<price;
}
void tape::display()
{
    cout<<"\ntile:"<<title;
    cout<<"\nPlay time:"<<time<<"mins";
    cout<<"n price:"<<price;
}
int main()
{
    char *title = new char[30];
    float price,time;
    int pages;
    //Book details
    cout<<"\nEnter Bookk details\n";
    cout<<"Title:";cin>>title;
    cout<<"price:";cin>>pages;
    cout<<"Pages:";cin>>price;
    book book1(title,pages,price);
    //tape details
    cout<<"\nEnter Tape details\n";
    cout<<"Title:";cin>>title;
    cout<<"Price:";cin>>price;
    cout<<"Play time(mins)";cin>>time;
    tape tape1(title,time,price);

    media *list[2];
    list[0]=&book1;
    list[1]=&tape1;
    cout<<"\nMedia Details";
    cout<<"\n...BOOK...";
    list[0]->display();//display book details
    cout<<"\n...TAPE...";
    list[1]->display();//display tape details
    return 0;
}