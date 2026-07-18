#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream outf("ITEM"); //connect item to file outf
    cout<<"Enter item name";
    char name[30];
    cin>>name; //get name from keyboard
    outf<<name<<"\n";
    cout<<"Enter item cost";
    float cost;
    cin>>cost; //get cost from keyboard
    outf<<cost<<"\n"; //write to file ITEM
    outf.close(); //Disconnect item from outf
    ifstream inf("ITEM"); //read name from file ITEM
    inf>>name;
    inf>>cost;
    cout<<"\n";
    cout<<"Item name:"<<name<<"\n";
    cout<<"Item cost:"<<cost<<"\n";
    inf.close();
    return 0;
}