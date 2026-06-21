#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<setiosflags(ios::left)<<setw(15) <<"Last Name"<<setiosflags(ios::left) <<setw(15)<<"Last Name"<<setiosflags(ios::left)<<setw(15)<<"Street Address"<<setiosflags(ios::left)<<setw(15)<<"Town"<<setiosflags(ios::left)<<setw(15)<<"State"<<endl;
    cout << string(75,'.') << endl;
    cout<<setiosflags(ios::left)<<setw(15) <<"jones"<<setiosflags(ios::left)<<setw(15)<<"Bernard"<<setiosflags(ios::left)<<setw(15)<<"109 Pinecane"<<setiosflags(ios::left)<<setw(15)<<"Little Town"<<setiosflags(ios::left)<<setw(15)<<"MI"<<endl;
    cout<<setiosflags(ios::left)<<setw(15) <<"o'Brian"<<setiosflags(ios::left)<<setw(15)<<"Coleen"<<setiosflags(ios::left)<<setw(15)<<"42E.99thAve"<<setiosflags(ios::left)<<setw(15)<<"Big city"<<setiosflags(ios::left)<<setw(15)<<"NY"<<endl;
    cout<<setiosflags(ios::left)<<setw(15) <<"Wong"<<setiosflags(ios::left)<<setw(15)<<"Mary"<<setiosflags(ios::left)<<setw(15)<<"121 AAlabmest"<<setiosflags(ios::left)<<setw(15)<<"lakeville"<<setiosflags(ios::left)<<setw(15)<<"IL"<<endl;

    return 0;
}