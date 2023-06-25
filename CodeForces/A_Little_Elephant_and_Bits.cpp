using Ull = unsigned long long;
using ll = long long;
#include<bits/stdc++.h>
using namespace std;
 
 void solve(){ 
    string s; cin>>s;
    int k=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            k=i;
            break;
        }
    }
    vector<int>ans;
    for(int i=0;i<s.size();i++){
        if(i!=k){
            ans.push_back(s[i]-'0');   
        }
    }
    for(auto it:ans) cout<<it;
    cout<<endl;

}

  int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
      solve();
    return 0;
}