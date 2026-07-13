/*Create a class mat of size mxn .Define all the possible matrix operations for mat type objects*/
#include<iostream>
using namespace std;
const int m=2;
const int n=3;
class mat{
    private:
        int ma[m][n];
        int i;
        int j;
    public:
        mat()
        {
          for (int i=0;i<m;i++)
            for(int j=0;j<n;j++)    
                ma[i][j]=0;
        }
        void get();
        void put();

        mat operator +(mat o);
       
};
void mat:: get()
{
    cout<<"Enter matrix to be added:";
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
        cin>>ma[i][j];
}
void mat::put()
{
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        cout<<ma[i][j]<<" ";
}

mat mat:: operator +(mat o)
{
mat temp;
for (i=0;i<m;i++)
    for (j=0;j<n;j++)
       temp.ma[i][j]=ma[i][j]+o.ma[i][j];
return temp;
}
int main()
{
    mat m1,m2,m3;
    m1.get();
    m2.get();
    m3=m1+m2;
    m3.put();
    return 0;
}