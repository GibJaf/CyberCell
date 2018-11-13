#include<iostream>
using namespace std;
int main()
{
int i=0,cases;
cout<<" enter no of cases" ;
cin>>cases;
while(i<cases)
{
int friends,nocho;
cout<<"Enter the no of friends and no of chocolates"<<endl;
cin>>friends;
cin>>nocho;

if(nocho%friends==0)
{
cout<<"yes"<<endl;
}

else
{
cout<<"  NO "<<endl;

}
i++;
}

}
