#include<iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int t, n, *h, i = 0, count;
	cin>>t;
	while(t--){
		//cin>>n;
		h = new int[t];
		for(i=0;i<n;i++){
			cin>>h[i];
			if(i==0){cout<<"1 ";}
			else{
				count =0;
				for(int j=i;h[j]<=h[i];j--){
					count++;
				}
				cout<<count<<" ";
			}		
			
		}	
	}
}
