#include<iostream>
using namespace std;
class item
{
    int code;
    float price;
    public:
    void getdata(int a,float b)
    {
        code=a;
        price=b;
    }
    void show(void)
    {
        cout<<"code:"<<code<<"\n";
        cout<<"Price:"<<price<<"\n";
    }
};
const int SIZE=2;
int main()
{
    item *p= new item[SIZE];
    item *d=p;
    int x,i;
    float y;
    for(i=0;i<SIZE;i++)
        {
            cout<<"input code and price for item"<<i+1;
            cin>>x>>y;
            p->getdata(x,y);
            p++;
        }
    for(i=0;i<SIZE;i++)
    {
        cout<<"Item:"<<i+1<<"\n";
        d->show();
        d++;
    }
    return 0;
}