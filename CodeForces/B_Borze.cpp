using Ull = unsigned long long;
using ll = long long;
#include<bits/stdc++.h>
using namespace std;
 
 void solve(){ 
    string s; cin>>s;
    int n=s.size();
    // 0 as «.» , 1 as «-.» and 2 as «--»
    vector<int>v;
    for(int i=0;i<n;i++){
      if(s[i]=='-' && s[i+1]=='-') {
      v.push_back(2); i++;
      }
      else if(s[i]=='-' && s[i+1]=='.') {
      v.push_back(1); i++; 
      }
      else v.push_back(0);
    }
    for(auto it:v)cout<<it;
    cout<<endl;
}

  int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 

    
    solve();
    return 0;
}