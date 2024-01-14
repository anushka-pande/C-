#include<iostream>
using namespace std;
class student
{
    string name;
    int rollno;
    public:
    void gets();
    void shows();
};
void student::gets()
{
    cout<<"Enter the name of student:";
    cin >>name;
    cout<<"Enter the roll no:";
    cin>>rollno;
}
void student::shows()
{
    cout<<"Name:"<<name<<"\n"<<"Roll No"<<rollno<<"\n";
}
class Marks
{
    public:
    int mark;
    void getc();
    void displayc();
};
void Marks::getc()
{
    cout<<"Enter the marks:";
    cin>>mark;
}
void Marks::displayc()
{
    cout<<"marks:"<<mark<<endl;
}
class Result:public student,public Marks
{
    public:
    void result()
    {
        if( mark > 40){
            cout << "You are passed";
        }
        else{
            cout<< "\nyou are failed";
        }
    }
};
int main()
{
  Result r1;
  r1.gets();
  r1.shows();
  r1.getc();
  r1.displayc();
  r1.result();
}
