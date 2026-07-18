/*Wap that reads a text file and creates another file that is identical except that every sequence 
of consequtive blank spaces is replaced by single space*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream filein;
    filein.open("test.txt");
    char intro[30];
    filein.getline(intro,30);
    for(int i=0;intro[i]!='\0';i++)
    {
    if (intro[i]==' ' && intro[i+1]==' ')
    {
        for(int j=i;intro[j]!='\0';j++)
           { intro[j]=intro[j+1];}
        i--;
    }
}
   
    cout<<intro;
return 0;
}