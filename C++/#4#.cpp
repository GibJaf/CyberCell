#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n;
    
    while(cin>>t) {
        for(int i=0;i<t;i++){
            cin>>n;

            if( n%12==0 || n%12==1 || n%12==6 || n%12==7 ){
                if( n%12==0)      cout<<n-11 ;
                else if( n%12==1) cout<<n+11 ;
                else if( n%12==7) cout<<n-1 ;
                else if(n%12==6)  cout<<n+1 ;
                        cout<<" "<<"WS"<<endl;
                }

             else if( n%12==2 || n%12==5 || n%12==8  || n%12==11 ){
                if( n%12==2)       cout<<n+9 ;
                else if( n%12==5)  cout<<n+3 ;
                else if( n%12==8 ) cout<<n-3 ;
                else if(n%12==11 ) cout<<n-9 ;
                        cout<<" "<<"MS"<<endl;
                }

            else{
                if( n%12==3)      cout<<n+7 ;
                else if( n%12==4) cout<<n+5 ;
                else if( n%12==9) cout<<n-5 ;
                else if(n%12==10) cout<<n-7 ;
                        cout<<" "<<"AS"<<endl;
                }

        }
    }

return 0;

}




