#include<iostream>
using namespace std;
int main()
{int num,count=0;
cout<<"Enter a number"<<endl;
cin>>num;
while(num>0)
{num=num/10;
count++;
}
cout<<"Number of digits in a given number is : "<<count<<endl;
return 0;
}
