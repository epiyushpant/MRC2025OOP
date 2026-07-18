#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
class INVENTORY
{
    char name[10];
    int code;
    float cost;
    public:
        void readdata(void);
        void writedata(void);
};
void INVENTORY::readdata(void)
{
    cout<<"Enter name:";cin>>name;
    cout<<"Enter code:";cin>>code;
    cout<<"Enter cost:";cin>>cost;
}
void INVENTORY::writedata(void)
{
    cout<<setiosflags(ios::left)
    <<setw(10)<<name 
    <<setiosflags(ios::right)
    <<setw(10)<<code 
    <<setprecision(2)
    <<setw(10)<<cost 
    <<endl;
}
int main()
{
    INVENTORY item[3];
    fstream file;
    file.open("STOCK.DAT",ios::in,ios::out,ios::binary,ios::trunc);
    cout<<"Enter details for three items\n";
    for(int i=0;i<3;i++)
    {
        item[i].readdata();
        file.write((char *) &item[i],sizeof(item[i]));
    }
    file.seekg(0);
    cout<<"output\n";
    for(int i=0;i<3;i++)
    {
        file.read((char*) &item[i],sizeof(item[i]));
        item[i].writedata();
    }
    file.close();
    return 0;
}