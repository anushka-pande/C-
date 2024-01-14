#include <iostream>
using namespace std;
class Integer
{
    int num;
public:
    Integer(int n = 0)
    {
        num = n;
    }
    Integer operator-()
    {
        return Integer(-num);
    }
    Integer operator++()
    {
        return Integer(++num);
    }
    Integer operator++(int)
    {
        return Integer(num++);
    }
    Integer operator--()
    {
        return Integer(--num);
    }
    Integer operator--(int)
    {
        return Integer(num--);
    }
    void display()
    {
        cout << "The value of num is: " << num << endl;
    }
};
int main()
{
    Integer i1(10), i2(-5), i3;
    i3 = i1;
    cout << "Original Number ";
    i3.display();
    i3 = -i1;
    cout << "Unary Minus (-num) ";
    i3.display();
    i3 = ++i1;
    cout << "Prefix Increment (++num) ";
    i3.display();
    i3 = i2++;
    cout << "Postfix Increment (num++)";
    i3.display();
    i3 = --i1;
    cout << "Prefix Decrement (--num) ";
    i3.display();
    i3 = i2--;
    cout << "Postfix Decrement (--num) ";
    i3.display();
    return 0;
}
