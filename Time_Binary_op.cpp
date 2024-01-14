#include <iostream>
using namespace std;
class Time
{
    int h, m, s;

public:
    Time() {}
    Time(int Hours, int Minutes, int Seconds)
    {
        h = Hours;
        m = Minutes;
        s = Seconds;
    }
    Time operator+(Time);
    void display(void);
};
Time Time::operator+(Time T)
{
    Time temp;
    temp.h = h + T.h;
    temp.m = m + T.m;
    temp.s = s + T.s;
    if (temp.s >= 60)
    {
        temp.s -= 60;
        temp.m++;
    }
    if (temp.m >= 60)
    {
        temp.m -= 60;
        temp.h++;
    }
    return (temp);
}
void Time::display(void)
{
    cout << h << ":" << m << ":" << s << endl;
}
int main()
{
    Time T1 = Time(10, 20, 10);
    Time T2 = Time(06, 10, 40);
    cout << "T1 = ";
    T1.display();
    cout << "T2 = ";
    T2.display();
    Time sum = T1 + T2;
    cout << "Sum = ";
    sum.display();
    return 0;
}