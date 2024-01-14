#include<iostream>
using namespace std;
int main()
{
    int m1[3][3],m2[3][3],add[3][3],i,j;
    cout<<"Enter first matrix elements\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>m1[i][j];
        }
    }
    cout<<"Enter second matrix elements\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>m2[i][j];
        }
    }
    cout<<"Sum of both matrices is:\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            add[i][j]=m1[i][j]+m2[i][j];
            cout<<add[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}