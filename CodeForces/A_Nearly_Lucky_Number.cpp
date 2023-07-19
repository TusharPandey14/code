using Ull = unsigned long long;
using ll = long long;
#include<bits/stdc++.h>
using namespace std;
 
 void solve(){ 
    string s; cin>>s;
    bool ans=true;
    int lucky=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='7'|| s[i]=='4'){
           lucky++;
        }
    }
     string luckyCount = to_string(lucky);
    for (char digit : luckyCount) {
        if (digit != '4' && digit != '7') {
            ans= false;
        }
    }
    if(ans)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}

  int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 

    solve();
    return 0;
}