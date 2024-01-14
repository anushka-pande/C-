#include <iostream>
#include <cmath>
using namespace std;
class triangle
{
    float b, h;

public:
    // default constructor
    triangle()
    {
        b = 50;
        h = 10;
    }
    // parameterized constructor
    triangle(float x, float y)
    {
        b = x;
        h = y;
    }
    // copy constructor
    triangle(const triangle &A)
    {
        b = A.b;
        h = A.h;
    }
    // destructor
    ~triangle()
    {
        cout << "Destructor is called for a triangle" << endl;
    }
    float parameters()
    {
        cout << "Enter the base of triangle:" << endl;
        cin >> b;
        cout << "Enter the height of triangle:" << endl;
        cin >> h;
    }
    float Area()
    {
        return (0.5) * b * h;
    }
};
int main()
{
    triangle A1;
    triangle A2(15, 20);
    triangle A3(A1);
    A3.parameters();
    cout << "Area A1 using default constructor:" << A1.Area() << endl;
    cout << "Area A2 using parameterized constructor:" << A2.Area() << endl;
    cout << "Area A3 using copy constructor:" << A3.Area() << endl;
    return 0;
}