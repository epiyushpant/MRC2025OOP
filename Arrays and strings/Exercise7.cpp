#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<cstring>
const int MAX=50;
using namespace std;
class Money{
    private:
        char money[MAX];
    public:
        Money()
        {money[0]='\0';}
        Money(char mo[MAX])
        {
            strcpy(money,mo);
        }
        void mstold()
        {
            cout<<"Enter money";
            cin>>money;
           char temp[MAX];
        int j = 0;

        for(int i = 0; money[i] != '\0'; i++)
        {
            if(money[i] != '$' && money[i] != ',')
            {
                temp[j++] = money[i];
            }
        }
        temp[j] = '\0';

        long double value = strtold(temp, NULL);

        cout << "Long double value = " << value << endl;
        }
};
int main()
{
    Money m1;
    m1.mstold();
    return 0;
}