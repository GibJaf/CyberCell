

#include<iostream   >
using namespace std;

int chess[10][10]={0};
int tryst(int r,int c,int k)
{
int count=0;
if(r<0 || r>9 || c<0 || c>9)
return 0;
if(k==0)
return 0;
if(chess[r][c]==1 && k==1)
return 0;
if(k==1){
count=1;
chess[r][c]=1;
}
return count+ tryst(r-2,c-1,k-1) + tryst(r-2,c+1,k-1) + tryst(r-1,c-2,k-1) + tryst(r-1,c+2,k-1) + tryst(r+2,c-1,k-1) + tryst(r+2,c+1,k-1) + tryst(r+1,c-2,k-1) + tryst(r+1,c+2,k-1);
}

int main()
{
int r,c,k;
cout<<"Enter value of r c k:";
cin>>r>>c>>k;
r--;
c--;
k++;

int res = tryst(r,c,k);
cout<<res<<endl;
return 0;
}

