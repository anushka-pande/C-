#include <iostream>
using namespace std;
class Student
{
    char name;
    int rollno;
    float marks[5];
    float totalMarks;
    char grade;

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
    cout << "Enter marks for 5 subjects:";
    for (int i = 0; i < 5; i++)
    {
        cout << "Subject" << i + 1<<":";
        cin >> marks[i];
    }
    totalMarks = 0;
    for (int i = 0; i < 5; i++)
    {
        totalMarks += marks[i];
    }
    if (totalMarks >= 90)
    {
        grade = 'A';
    }
    else if (totalMarks >= 80)
    {
        grade = 'B';
    }
    else if (totalMarks >= 70)
    {
        grade = 'C';
    }
    else if (totalMarks >= 60)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }
}
void Student::printdata()
{
    cout<<"Name:"<<name<<endl;
    cout<<"Roll No:"<<rollno<<endl;
    cout<<"Total Marks:"<<totalMarks<<endl;
    cout<<"Grade:"<<grade<<endl;
}
int main()
{
    int n;
    cout<<"Enter number of students:";
    cin>>n;
    Student *students = new Student[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter details for Student"<<(i + 1)<<":"<<endl;
        students[i].getdata();
    }
    cout<<"Student Information:"<<endl;
    for (int i=0;i<n;i++)
    {
        cout<<"Student Details:"<<endl;
        students[i].printdata();
    }
    return 0;
}