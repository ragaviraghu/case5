#include<iostream>
using namespace std;
int main()
{int num,n,count=0;
cout<<"Enter the number : "<<endl;
cin>>num;
while(num!=0)
{
n=num%2;
if(n==1)
count++;        
num=num/2;
}
if(count==1)
cout<<"Yes(power of 2)"<<endl;
else
cout<<"No"<<endl;
return 0;
}
