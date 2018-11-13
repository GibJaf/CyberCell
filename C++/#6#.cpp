#include<iostream>
#include<string.h>
#include<stdlib.h>
#define MAX 100
using namespace std;
int main()
{
int l,i,j,zero,one;
char s[MAX];
cout<<"enter the numbers";
cin>>s;

l = strlen(s);

for(i=0; i<l; i++)
{ 
zero = 0;

for(j=0;j<6 && s[i+j] == '0';j++)
{

zero++;
if(zero>=6)
{
cout<<"Sorry, sorry!";
exit(0);
}	
}
one = 0;
for(j=0;j<6 && s[i+j] == '1';j++)
{

one++;
if(one>=6)
{
cout<<"Sorry, sorry!";
exit(0);
}	
}
}
cout<<"Good luck!";
return 0;
}
