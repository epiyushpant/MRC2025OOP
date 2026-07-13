/*Define a class string .Use overloaded == operator to compare two strings*/
#include<iostream>
using namespace std;
class String
{
    char a[10];
    public:
        String()
        {
            for(int i=0;i<10;i++)
                a[i]='\0';
        }
        bool operator==(String b);
        void get();
};
bool String :: operator ==(String b)
{
    
    for(int i=0;i<10;i++){
       if(a[i]!=b.a[i])
        return false;
    }
return true;
      
}
void String ::get()
{
    cout<<"Enter a string:";
    cin>>a;

}
int main()
{
    String s1,s2;
    s1.get();
    s2.get();
    if(s1==s2)
    {
        cout<<"Equal";
    }
    else
        cout<<"Unequal";
return 0;
}
