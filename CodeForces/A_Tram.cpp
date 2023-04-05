using Ull = unsigned long long;
using ll = long long;
#include<bits/stdc++.h>
using namespace std;
 
 void solve(){ 
    int n; cin>>n;
    int cnt=0,res=0;
    int a,b;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        cnt-=a;
        cnt+=b;
        res=max(res,cnt);
    }
    cout<<res<<endl;
}

  int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
      solve();
    return 0;
}