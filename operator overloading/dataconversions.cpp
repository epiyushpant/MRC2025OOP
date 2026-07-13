#include<iostream>
using namespace std;
class invent2;
class invent1
{
    int code;
    int items;
    float price;
    public:
        invent1(int a,int b,float c)
        {
            code=a;
            items=b;
            price=c;
        }
        void putdata()
        {
            cout<<"code:"<<code<<"\n";
            cout<<"items:"<<code<<"\n";
            cout<<"value:"<<code<<"\n";
        }
        int getcode()
            {
                return code;
            }
        int getitems()
        {
            return items;
        }
        float getprice()
        {
            return price;
        }
        operator float()
        {return items*price;}
        /*operator invent2()
        invent2 temp;
        temp.code=code;
        temp.value=price*items;
        return temp;}*/
};//end of source class
class invent2
{
    int code;
    float value;
    public :
        invent2()
        {
            code=0;
            value=0;
        }
        invent2(int x , float y)
        {
            code=x;
            value=y;
        }
        void putdata()
        {
            cout<<"code:"<<code<<"\n";
            cout<<"value:"<<value<<"\n";
        }
        invent2 (invent1 p)
            {
                code=p.getcode();
                value=p.getitems()*p.getprice();
            }
};//end of destination class
int main()
{
    invent1 s1(100,5,140.0);
    invent2 d1;
    float total_value;
    /*invent to float*/
    total_value=s1;
    /*invent1 to invent2*/
    d1=s1;
    cout<<"Product details-invent1 tyep"<<"\n";
    s1.putdata();
    cout<<"In stock value"<<"\n";
    cout<<"value="<<total_value<<"\n\n";
    cout<<"product details-invent2 type"<<"\n\n";
    d1.putdata();
    return 0;
}