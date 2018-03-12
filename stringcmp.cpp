#include<iostream>
using namespace std;
int main()
{string s1,s2;
int count1 = 0, count2 = 0, flag = 0, i=0;
cout<<"Enter a string1 : "<<endl;
getline(cin,s1);
cout<<"Enter a string2 : "<<endl;
getline(cin,s2);
while(s1[count1]!='\0')
count1++;
while(s2[count2]!='\0')
count2++;
 while((i<count1)&&(i<count2))
{if(s1[i]==s2[i])
{i++;
continue;
}
if(s1[i]<s2[i])
{flag = -1;
break;
}
if(s1[i]>s2[i])
{flag = 1;
break;
}
}
if(flag==0)
cout<<s1<<endl;
if(flag == 1)
cout<<s1<<endl;
if(flag==-1)
cout<<s2<<endl;
return 0;
}
