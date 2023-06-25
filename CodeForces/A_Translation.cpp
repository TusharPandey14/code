using Ull = unsigned long long;
using ll = long long;
#include<bits/stdc++.h>
using namespace std;
 
 void solve(){ 
    string s,t;
    cin>>s>>t;
    reverse(t.begin(),t.end());
    if(s==t)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}

  int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
      solve();
    return 0;
}