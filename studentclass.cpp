#include <iostream>
using namespace std;
class Student
{
    char name;
    int rollno;
    float totalMarks;

public:
    void getdata();
    void printdata();
};
void Student::getdata()
{
    cout << "Enter name:";
    cin >> name;
    cout << "Enter roll no.:";
    cin >> rollno;
    cout << "Enter total marks:";
    cin >> totalMarks;
}
void Student::printdata()
{
    cout << "Name:" << name << endl;
    cout << "Roll no.:" << rollno << endl;
    cout << "Total Marks:" << totalMarks << endl;
}
int main()
{
    Student S;
    cout << "Enter details of students:" << endl;
    S.getdata();
    cout << "Student Information:" << endl;
    S.printdata();
    return 0;
}
