#include <iostream>
using namespace std;
int main()
{
string s1,s2,concat;
cout<<"Enter string1 : "<<endl;
getline(cin,s1);
cout<<"Enter string2 : "<<endl;
getline(cin,s2);
concat=s1+s2;
cout<<"The concatenated String is : "<<concat<<endl;
return 0;
}
