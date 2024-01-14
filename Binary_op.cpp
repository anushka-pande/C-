#include<iostream>
using namespace std;
class Complex
{
    float x,y;
    public:
    Complex(){}
    Complex(float real,float imag)
    {
        x=real;
        y=imag;
    }
    Complex operator+(Complex);
    void display(void);
};
Complex Complex::operator+(Complex C)
{
    Complex temp;
    temp.x=x+C.x;
    temp.y=y+C.y;
    return (temp);
}
void Complex::display(void)
{
    cout<<x<<"+i"<<y<<"\n";
}
int main()
{
    Complex C1,C2,C3;
    C1=Complex(3.2,1.4);
    C2=Complex(3.6,1.2);
    C3=C1+C2;
    cout<<"C1= ";
    C1.display();
    cout<<"C2= ";
    C2.display();
    cout<<"C3= ";
    C3.display();
    return 0;
}