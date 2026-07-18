#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("country");
    fout<<"United states of america\n";
    fout<<"United Kingdom\n";
    fout<<"South Korea\n";
    fout.close();
    fout.open("capital");
    fout<<"Washington\n";
    fout<<"london\n";
    fout<<"Seoul\n";
    fout.close();
    //Reading files
    const int N=80; //size of line
    char line[N];
    ifstream fin;
    fin.open("Country");
    cout<<"Contents of country file\n";
    while(fin)
    {
        fin.getline(line,N);
        cout<<line<<"\n";
    }
    fin.close();
    fin.open("capital");
    cout<<"contents of capital file\n";
    while(fin)
    {
        fin.getline(line,N);
        cout<<line<<"\n";
    }
    fin.close();
    return 0;
}