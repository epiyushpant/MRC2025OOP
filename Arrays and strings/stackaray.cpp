//stakarray .cpp
//stack as calss
#include<iostream>
using namespace std;
class Stack
{
    private:
        enum {MAX=10};
        int st[MAX];
        int top;
    public:
        Stack()
        {
            top=0;
        }
        void push(int var)
        {
            st[++top]=var;
        }
        int pop()
        {
            return st[top--];
        }
};
int main()
{
    Stack s1;
    s1.push(12);
    s1.push(13);
    s1.push(14);
    s1.push(15);
    cout<<"1:"<<s1.pop()<<endl;
    cout<<"2:"<<s1.pop()<<endl;
    cout<<"3:"<<s1.pop()<<endl;
    cout<<"4:"<<s1.pop()<<endl;
    return 0;
}