#include<iostream>
using namespace std;
const int MAX=6;
void maxint(const double a[], int n);
int main()
{
    double a[MAX];
    cout<<"Enter elements:";
    for(int j=0;j<MAX;j++)
    {
        cin>>a[j];
    }
    maxint(a, MAX);
    return 0;
}
void maxint(const double a[], int n)
{
    double m = a[0];
    int idx = 0;
    for (int j = 1; j < n; ++j)
{
        if (a[j] > m)
        {
            m = a[j];
            idx = j;
        }
    }
    cout << "Max value: " << m << " at index " << idx << endl;
}