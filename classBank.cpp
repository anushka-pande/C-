#include<iostream>
using namespace std;
class Bank
{
    char customerName[50];
    int accountNo;
    char bankName[20];
    char accounttype[20];
    float balance;
    float amount;
    public:
    void getData();
    void printData();
    void debit();
    void credit();
};
void Bank::getData()
{
    cout<<"Enter the name of customer:";
    cin>>customerName;
    cout<<"Enter account number:";
    cin>>accountNo;
    cout<<"Enter the name of bank:";
    cin>>bankName;
    cout<<"Enter the type of account:";
    cin>>accounttype;
    cout<<"Enter the balance:";
    cin>>balance;
    cout<<"Enter the required amount to be credited/debited:";
    cin>>amount;
}
void Bank::printData()
{
    cout<<"Name:"<<customerName<<endl;
    cout<<"Account No.:"<<accountNo<<endl;
    cout<<"Bank Name:"<<bankName<<endl;
    cout<<"Account Type:"<<accounttype<<endl;
    cout<<"Balance:"<<balance<<endl;
    cout<<"Amount:"<<amount<<endl;
}
void Bank::debit()
{
    if(balance>2000 && balance>amount)
    {
        balance-=amount;
        cout<<"Debited amount from your account:"<<amount<<endl;
        cout<<"Total Balance"<<balance<<endl;
    }
    else
    {
        cout<<"Low balance! You cannot debit the amount"<<endl;
    }
}
void Bank::credit()
{
    balance+=amount;
    cout<<"Credited amount to your account:"<<amount<<endl;
    cout<<"Total Balance:"<<balance<<endl;
}
int main()
{
    int choice;
    Bank B;
    B.getData();
    B.printData();
    cout<<"Enter 1 to withdraw money."<<endl;
    cout<<"ENter 2 to deposit money."<<endl;
    do
    {
    cout<<"Enter choices:";
    cin>>choice;
    switch(choice)
    {
        case 1:
        B.debit();
        break;
        case 2:
        B.credit();
        break;
        default:
        cout<<"Invalid choice!!";
    }
    }while(choice>=1 && choice<=2);
    return 0;
}
