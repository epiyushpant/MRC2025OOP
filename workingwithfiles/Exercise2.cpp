#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
    int number[3];
    char name[3][30];
    ofstream fileout;
    fileout.open("telp");
    for(int i=0;i<3;i++)
    {
        cout<<"Enter three names:\n";
        cin.getline(name[i],30);
        cout<<"Enter 3 numbers\n";
        cin>>number[i];
        cin.ignore();
        fileout<<setiosflags(ios::left)<<setw(10)<<name[i]
            <<setiosflags(ios::right)<<number[i]<<"\n";

    }
    fileout.close();
    ifstream filein;
    filein.open("telp");
    cout<<"\ncontents of file:\n";
    for(int i=0;i<3;i++)
    {   
        filein>>name[i]>>number[i];
        cout<<left<<setw(10)<<name[i]
        <<right<<number[i]<<"\n";
    }
    filein.close();
    return 0;
};