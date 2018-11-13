#include<iostream>
using namespace std;

void binary(int n)
{
int binum[1000];
int i=0; int count=0;
while(n>0)
{
binum[i]=n%2;
n=n/2;
i++;
}
for (int j=i-1;j>=0;j--) 
{
if(binum[j]==1)
{
count++;
}	
}
cout<<count<<endl; 
}


int main()
{
int N;

while(1)
{
cout<<"Enter a number : ";
cin>>N;
cout<<"Output : ";
binary(N);
}

return 0;
}


