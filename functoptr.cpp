#include <iostream>
using namespace std;
float add(float a, float b)
{
    return a + b;
}
float sub(float a, float b)
{
    return a - b;
}
float mul(float a, float b)
{
    return a * b;
}
float div(float a, float b)
{
    if (b == 0)
    {
        cout << "Error: Division by zero" << endl;
        return 0.0;
    }
    return a / b;
}
int main()
{
    int c;
    float a, b, result;
    float (*ptr[4])(float,float);
    ptr[1] = add;
    ptr[2] = sub;
    ptr[3] = mul;
    ptr[4] = div;
    while (true)
    {
        cout << "1 for addition" << endl
             << "2 for subtraction" << endl
             << "3 for multiplication" << endl
             << "4 for division" << endl
             << "Enter your choice:" << endl;
        cin >> c;
        if (c < 1 || c > 4)
        {
            cout << "Invalid choice. Exiting the program." << endl;
            break;
        }
        cout << "Enter two operands:" << endl;
        cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;
        result = ptr[c](a, b);
        cout << "Result = " << result << endl;
    }
    return 0;
}
