#include<iostream>
using namespace std;
const int SIZE=3;
template<class T>
class vector
{
    T *v;
    public:
    vector()
    {
        v=new T[SIZE];
        for(int i=0;i<SIZE;i++)
        {
            v[i]=0;
        }
    }
    vector(T *a)
    {
        v=new T[SIZE];
        for(int i=0;i<SIZE;i++)
            v[i]=a[i];
    }
T operator *(vector &y)
{
    T sum=0;
    for(int i=0;i<SIZE;i++)
    {
        sum+=this->v[i]*y.v[i];
    }
    return sum;
}
};
int main()
{
    int x[3]={1,2,3};
    int y[3]={4,5,6};
    vector<int> v1(x);
    vector<int> v2(y);
    int R=v1*v2;
    cout<<"R="<<R<<"\n";
    return 0;
}