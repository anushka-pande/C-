#include<iostream>
using namespace std;
int main()
{
    int a[10],i,sumEven=0,sumOdd=0;
    cout<<"Enter elements of an array:";
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            sumEven+=a[i];
        }
        else
        {
            sumOdd+=a[i];
        }
    }
    cout<<"Sum of Even elements is:"<<sumEven<<endl;
    cout<<"Sum of odd elements is:"<<sumOdd<<endl;
    return 0;
}