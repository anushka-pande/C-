#include <iostream>
using namespace std;
template <typename T, typename U>
class Pair
{
private:
    T first;
    U second;

public:
    Pair(T f, U s) : first(f), second(s) {}
    T getFirst() const
    {
        return first;
    }
    U getSecond() const
    {
        return second;
    }
    void setFirst(T f)
    {
        first = f;
    }
    void setSecond(U s)
    {
        second = s;
    }
};
int main()
{
    Pair<int, double> pair1(5, 3.14);
    Pair<string, char> pair2("Hello", 'X');
    cout << "Pair 1: First =" << pair1.getFirst() << ",Second=" << pair1.getSecond() << endl;
    cout << "Pair 2: First =" << pair2.getFirst() << ",Second=" << pair2.getSecond() << endl;
    pair1.setFirst(10);
    pair2.setSecond('Y');
    cout << "Updated Pair 1: First=" << pair1.getFirst() << ", Second = " << pair1.getSecond() << endl;
    cout << "Updated Pair 2: First = " << pair2.getFirst() << ", Second = " << pair2.getSecond() << endl;
    return 0;
}
