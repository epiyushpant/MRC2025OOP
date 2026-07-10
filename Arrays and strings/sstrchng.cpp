//sstrchng.cpp
//changing parts of string object
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1("Quick! Send for Count Graystone.");
    string s2("lord");
    string s3("Don't ");

    s1.erase(0,7); //remove quick
    s1.replace(9,5,s2);//replace count with lord
    s1.replace(0,1,"s"); //replace "S with s"
    s1.insert(0,s3);//Insert don't at beginning
    s1.erase(s1.size()-1,1);//remove '.'
    s1.append(3,'!');//append "!!!"
    int x=s1.find(' ');
    while(x<s1.size())
    {
        s1.replace(x,1,"/");//replace with slash
        x=s1.find(' ');
    }
    cout<<"s1:"<<s1<<endl;
    return 0;
}