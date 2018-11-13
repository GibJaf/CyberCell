#include<iostream>
using namespace std;

void shapearea(int n)
{
int i=1,sum=0,j,count=0;
if(n!=1)
{
while(count!=n)
{
if(i%2==1)
{
sum=sum+i;
count++;
}
i++;
}
j=i-2;
count--;
while(count!=0)
{
if(j%2==1)
{
sum=sum+j;
count--;
}
j--;
}
cout<<sum;
}
}

int main()
{
int n;
cin>>n; //n-intresting polygon input
shapearea(n);
return 0;
}


