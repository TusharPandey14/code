#include <bits/stdc++.h>
using namespace std;

#define ll long long int



int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);
   int t; cin>>t;
   while(t--){
      int n,k;cin>>n>>k;

      int a[n+2][n+2];
      int req=0;
      
      for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
            cin>>a[i][j];
         }
      }

        /*
        int b[n][n]; 
                                           // 180 * matrix Rotiation 
        int x=0;
        for(int i=n-1;i>-1;i--){
            int y=0;
            for(int j=n-1;j>-1;j--){
                b[x][y]=a[i][j],y++;x++;
            }
    }*/
      for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
            if(a[i][j]!=a[n-1-i][n-1-j]){    // counting diff elements after 180 * rotation 
               req++;
            }
         }
      }

      req/=2;

      if(k>=req and (n%2==1 or (req-k)%2==0)){
         cout<<"YES"<<endl;
      }
      else{
         cout<<"NO"<<endl;
      }

      

   }
   return 0;
}