#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char key[]="HELLO !!!";
    char Buffer[10];

    strcpy(Buffer,key);
    cout<<"Copied String is:  "<<Buffer<<endl;

    return 0;
}