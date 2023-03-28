using Ull = unsigned long long;
using ll = long long;
#include<bits/stdc++.h>
using namespace std;
 
 
  int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 

   string s; cin>>s;
   int n=s.length();
   int k=7;
   for(int i=0;i<=n-k;i++){
    int cnt=0;
     // i,i+1,i+2,i+3,i+4; // for 5 elements , we go from  { i + k -1 } ;   
    for(int j=i;j<=i+k-1;j++){
        if(s[i]==s[j]){
            cnt++;
        }
    }
    if(cnt==k){
        cout<<"YES"<<endl;
        return 0;
     }
  }
    cout<<"NO"<<endl;
}