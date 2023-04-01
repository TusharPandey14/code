using Ull = unsigned long long;
using ll = long long;
#include<bits/stdc++.h>
using namespace std;
 
 void solve(){ 
   string s; cin>>s;
    vector<int> cnt(10);
    for (auto c : s) ++cnt[c - '0'];
    int mx = *max_element(cnt.begin(), cnt.end());
    if (mx == 4) cout << -1;
    else if (mx == 3) cout << 6;
    else cout << 4;
    cout << '\n';
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