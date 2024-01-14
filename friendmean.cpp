#include <iostream>
using namespace std;
class Sample
{
    float a;
    float b;

public:
    float setvalue();
    friend float mean(Sample s);
};
float Sample::setvalue()
{
    cout << "Enter first number:" << endl;
    cin >> a;
    cout << "Enter second number:" << endl;
    cin >> b;
}
float mean(Sample s)
{
    float mean = (s.a + s.b) / 2;
    return mean;
}
int main()
{
    Sample S;
    S.setvalue();
    cout << "Mean value= " << mean(S) << endl;
    return 0;
}