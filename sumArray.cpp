#include<iostream>
using namespace std;
int Sum(int arr[],int n,int i)
{   
    if(i<0)
    {
        return 0;
    }
    return arr[i]+Sum(arr,n,i-1);
}
int main()
{
    int n,i,sum;
    cout<<"Enter number of elements of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter "<< n <<" elements of array";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sum=Sum(arr,n,n-1);
    cout<<"Sum of all elements of array is:"<<sum<<endl;
    return 0;
}
