#include<iostream>
using namespace std;
int main()
{
string s;
int n;
cout<<"Enter the string : "<<endl;
getline(cin,s);
cout<<"Enter the number : "<<endl;
cin>>n;
for(int i=0;i<n;++i)
{
cout<<s<<endl;
}
return 0;
}
