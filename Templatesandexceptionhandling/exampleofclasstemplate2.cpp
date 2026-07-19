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
            v[i]=0;
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
            sum+=this->v[i]*y.v[i];
        return sum;
    }
};
int main()
{
    float x[3]={1.1,2.2,3.3};
    float y[3]={4.4,5.5,6.6};
    vector<float> v1(x);
    vector<float> v2(y);
    float R=v1*v2;
    cout<<"R="<<R<<endl;
    return 0;
}