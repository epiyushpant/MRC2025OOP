#include<iostream>
using namespace std;
const int MAX=20;
class safearay
{
    private:
        int limit[MAX];
    public:
        safearay()
        {
            for(int i=0;i<MAX;i++)
            {
                limit[i]=0;
            }
        }
        safearay(int l)
        {
            limit[0]=l;
        }
        void putel(int n,int idx)
        {
            if (idx >=0  && idx<MAX)
            {
                limit[idx]=n;
            }
            else
            {
            cout<<"Index out of bound:";
            }
        }
        void getel(int idx)
        {
            if(idx>0 && idx <MAX)
            {
                cout<<limit[idx];
            }
            
        }
};
int main()
{
    safearay lim;
    lim.putel(2,3);
    lim.getel(3);
    return 0;
}