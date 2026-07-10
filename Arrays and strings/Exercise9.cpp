#include<iostream>
using namespace std;
class queue
{
    private:
        enum{MAX=10};
        int que[MAX];
        int head;
        int tail;
    public:
        queue():head(0),tail(0)
        { }
        void get(int value)
        {
         if (tail == MAX)
         {
            cout<<"queue is full";
            return ;
         }
         que[tail++]=value;
        }
        int put()
        {
        if(head==tail)
        {
            cout<<"Queue is empty\n";
           
        }
        return que[head++];
        }

};
int main()
{
    queue q1;
    q1.get(2);
    q1.get(4);
    q1.get(5);
    cout<<q1.put();
    cout<<q1.put();
    cout<<q1.put();
    return 0;
}