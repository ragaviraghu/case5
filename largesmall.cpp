#include<iostream>
using namespace std;
int main()
{int n,i,arr[n],small,large;
cout<<"Enter a number"<<endl;
cin>>n;
cout<<"Enter the array elements : "<<endl;
for(int i=0;i<n;i++)
{cin>>arr[i];
}
small=arr[0];
large=arr[0];
for(i=1;i<n;i++)
{
if(arr[i]<small)
small=arr[i];
if(arr[i]>large)
large=arr[i];
}
cout<<"Smallest element is : "<<small<<endl;
 cout<<"Largest element is : "<<large<<endl;
return 0;
}
