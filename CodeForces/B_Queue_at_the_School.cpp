using Ull = unsigned long long;
using ll = long long;
#include<bits/stdc++.h>
using namespace std;
 
 void solve(){ 
   int n; cin>>n;
   int t; cin>>t;
   string s; cin>>s;
   for (int i = 0; i < t; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (s[j] == 'B' && s[j + 1] == 'G') {
                swap(s[j], s[j + 1]);
                j++; 
            }
        }
    } 
   cout<<s<<endl;
}

  int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
    solve();
    return 0;
}

