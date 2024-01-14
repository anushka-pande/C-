#include<iostream>
using namespace std;
class employee
{
   string name;
   int id;
   public:
    void gete();
    void displaye();

};
void employee::gete()
{
    cout << "Enter the name of employee:";
    cin >> name;
    cout << "Enter the Id:";
    cin>>id;
}
void employee::displaye()
{
    cout<<"Employee name "<<name<<endl;
    cout<<"Employee Id "<<id<<endl;
}
class company:public employee
{
    string companyname;
    int salary;
    public:
    void getc();
    void displayc();
};
void company::getc()
{
    cout<<"Enter the company name:";
    cin>>companyname;
    cout<<"Enter the salary:";
    cin>>salary;
}
void company::displayc()
{
    cout << "Company name:" << companyname <<endl;
    cout << "Employee salary:" << salary <<endl;
}
int main()
{
    company c1;
    c1.gete();
    c1.displaye();
    c1.getc();
    c1.displayc();

    return 0;
}
