/*Assume that a bank maintains two kinds of accounts for customers , one called saving account and the other current
account .The savings account provides compound interest and withdraws facillities but no cheque book facility
The current account provides cheque book facility but no interest .Current account holders should also maintain
a minimum balance falls below this level ,service charge is imposed

Create a class account that stores customer name, account number and type of account.From this derive this class
cur_acct and sav_acct to make them more specific to their requirements . include necessary member functions in order
to achieve the following tasks 
a)Accept deposit from customer and update the balance
b)Display balance
c)Compute and deposit interest
d)permit withdrawl and update the balance
e)check for the minimum balance impose penalty ,necessary and update the balance*/
#include<iostream>
#include<cstring>
using namespace std;
class account
{
    protected:
        char custname[20];
        int accNumber;
        char accounttype[20];
    public:
        float balance;
        account(char ch[],int aN,char acty[])
        {
            strcpy(custname,ch);
            accNumber=aN;
            strcpy(accounttype,ch);
        }
       void deposit(float amount)
       {
            balance +=amount;
       }
       void displaybalance()
       {
        cout<<"customer name:"<<custname<<endl;
        cout<<"Account Number:"<<accNumber<<endl;
        cout<<"Account Type:"<<accounttype<<endl;
        cout<<"Balance:"<<balance<<endl;
       }
};
class cur_acct:public account
{
    protected:
        int chequebook;
        float minimumbalance;
    public:
        cur_acct(char ch[],int aN,char acty[],int cheq) :account(ch,aN,acty)
        {
            chequebook=cheq;
            minimumbalance=100;
        }
        void withdraw(float amount)
        {
            balance-=amount;
        if (balance <minimumbalance){
            balance -= 100; //penalty
            cout<<"Minimum balance not maintained:"<<endl;
            cout<<"100 penalty is imposed"<<endl;
        }
    }

};
class sav_acct:public account
{
    protected:
        float rate;
    public:
        sav_acct(char ch[],int aN,char acty[],float r):account(ch,aN,acty)
        {
           rate = r;
        }
        void addinterest()
        {
            balance+=(balance*rate)/100;
        }
        void withdraw(float amount)
        {
            if(amount<=balance)
                balance-=amount;
            else
                cout<<"insufficient balance";
        }
        
};
int main()
{
    sav_acct s("Ram",100,"Saving",5);
    s.deposit(1000);
    s.addinterest();
    s.withdraw(500);
    s.displaybalance();
    cur_acct c("Hari",102,"current",1);
    c.deposit(500);
    c.withdraw(1800);
    c.displaybalance();
    return 0;
}