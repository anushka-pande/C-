#include<iostream>
using namespace std;
int main()
{
float dividend, divisor,quotient;
while(1)
{
cout<<endl<<"enter value of dividend:";
cin>>dividend;
cout<<endl<<"enter value of divisor:";
cin>>divisor;
try
{
if(divisor==0)
{
throw(divisor);
}
else
{
quotient= dividend/divisor;
cout<<"Quotient="<<quotient<<endl;
}
}
catch(float)
{
cout<<"Exception: divisor cannot be 0"<<endl;
}
}
}