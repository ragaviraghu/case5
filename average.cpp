#include<iostream>
using namespace std;
int main()
{int n,arr[n],sum=0,avg;
cout<<"Enter the number of elements"<<endl;
cin>>n;
cout<<"Enter the array elements : "<<endl;
for(int i=0;i<n;i++)
{cin>>arr[i];
}
for(int i=0;i<n;i++)
{sum=sum+arr[i];
}
avg=sum/n;
cout<<"The average of the given numbers is : "<<avg<<endl;
return 0;
}
