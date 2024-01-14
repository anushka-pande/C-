#include<iostream>
using namespace std;
class operation
{
    float a,b,add,sub,mul,div;
public: 
void get();
void sum();
void difference();
void product();
void division();
};
inline void operation::get()
{
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
}
inline void operation::sum()
{
    add=a+b;
    cout<<"Addition of two numbers:"<<a+b<<"\n";
}
inline void operation::difference()
{
    sub=a-b;
    cout<<"Substraction of two numbers:"<<a-b<<"\n";
}
inline void operation::product()
{
    mul=a*b;
    cout<<"Multiplication of two numbers:"<<a*b<<"\n";
}
inline void operation::division()
{
    div=a/b;
    cout<<"Division of two numbwers:"<<a/b<<"\n";
}
int main()
{
    operation O;
    O.get();
    O.sum();
    O.difference();
    O.product();
    O.division();
    return 0;
}