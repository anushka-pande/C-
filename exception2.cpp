#include <iostream>
using namespace std;
int main() 
{
const int Size=5;
int arr[Size]={1,2,3,4,5};
int index;
cout<<"Enter the index to access in the array: ";
cin>>index;
try
{
if(index<0||index>=Size)
{
throw(index);
}
int value=arr[index];
cout<<"Value at index"<<index<<": "<<value<<endl;
}
catch(int) 
{
cout<<"Exception: index out of bound"<<endl;
}
return 0;
}