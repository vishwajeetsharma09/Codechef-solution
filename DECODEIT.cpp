#include <iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t)
{
int l;
cin>>l;
string s;
cin>>s;
if(s.length()!=l) return 0;
int i=0;
while(l)
{
int q1= (s[i++]-48)*8;
int q2= (s[i++]-48)*4;
int q3= (s[i++]-48)*2;
int q4= (s[i++]-48)*1;
int q = q1+q2+q3+q4;
switch(q)
{
case 0: cout<<'a';break;
case 1: cout<<'b';break;
case 2: cout<<'c';break;
case 3: cout<<'d';break;
case 4: cout<<'e';break;
case 5: cout<<'f';break;
case 6: cout<<'g';break;
case 7: cout<<'h';break;
case 8: cout<<'i';break;
case 9: cout<<'j';break;
case 10: cout<<'k';break;
case 11: cout<<'l';break;
case 12: cout<<'m';break;
case 13: cout<<'n';break;
case 14: cout<<'o';break;
case 15: cout<<'p';break;
}
l-=4;
}
cout<<"\n";
t--;
}
return 0;
}