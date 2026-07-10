#include<iostream>
using namespace std;
const int MAX=10;
class matrix{
    private:
        int mat[MAX][MAX];
    public:
    matrix()
    {mat[0][0]=0;}
    matrix(int i,int j)
    {
        mat[i][j]=0;
    }
    void put(int k,int l,int n)
    {
        if (k>0 && k<=MAX)
            if(l>=0 && l<=MAX)
                mat[k][l ]=n;
    }
    void get(int k,int l)
    {
        if(k>0 && k<=10)
            if(l>0 && l<=10)
                cout<<mat[k][l];
    }
};
int main()
{
    matrix M;
    M.put(2,3,4);
    M.get(2,3);
    return 0;
}