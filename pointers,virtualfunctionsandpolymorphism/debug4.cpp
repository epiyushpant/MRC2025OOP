#include<iostream>
using namespace std;
class test
{
    private:
        int m;
    public:
        void getdata()
        {
            cout<<"Enter number";
            cin>>m;
        }
        void display()
        {
            cout<<m;
        }
};
int main()
{
    test T;
    T.getdata();
    T.display();
    cout<<endl;
    test *P;
    test *p= new test;
    p->getdata();
    p->display();
    return 0;
}