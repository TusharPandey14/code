using ll = long long;
#include<bits/stdc++.h>
using namespace std;
 
 void solve(){ 
    int n; cin>>n;
    string s;
    cin>>s;
    int flag=0,index=0;
    
    for(int i=0;i<n-1;i++){
        if(s[i]=='R' && s[i+1]=='L'){
            flag=1; break;
        }
        if(s[i]=='L' && s[i+1]=='R'){
            flag=2; index=i+1;
        }
    }
    if(flag==1) cout<<0<<endl;
    else if(flag==2) cout<<index<<endl;
    else cout<<-1<<endl;
}

  int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 

    int t;  cin>>t ; 
    while(t--)
    {
      solve();
    }
    return 0;
}