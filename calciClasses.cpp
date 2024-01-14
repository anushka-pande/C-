#include<iostream>
#include<math.h>
using namespace std;
class Calci
{
    float a, b;
public:
    Calci(float x, float y);
    float add();
    float sub();
    float multi();
    float div();
};
Calci::Calci(float x, float y)
{
    a = x;
    b = y;
}
float Calci::add()
{
    return a + b;
}
float Calci::sub()
{
    return a - b;
}
float Calci::multi()
{
    return a * b;
}
float Calci::div()
{
    if (b == 0)
    {
        cout << "Error!! Division by 0 not possible." << endl;
        return 0;
    }
    else
    {
        return a / b;
    }
}
int main()
{
    float a, b;
    int choice;
    cout << "Enter first number:";
    cin >> a;
    cout << "Enter second number:";
    cin >> b;
    Calci C(a, b);
    do
    {
        cout << "Enter choices:"<<endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Addition of two numbers: " << C.add() << endl;
            break;
        case 2:
            cout << "Subtraction of two numbers: " << C.sub() << endl;
            break;
        case 3:
            cout << "Multiplication of two numbers: " << C.multi() << endl;
            break;
        case 4:
            cout << "Result:" << C.div() << endl;
            break;
        default:
            cout << "Invalid choice!";
        }
    } while (choice >= 1 && choice <= 4);
    return 0;
}
