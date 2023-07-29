#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
 
void solve(){
    int n; cin>>n;
    if(n%2) cout<<-1<<endl;
    else {
        // Generate the perfect permutation
        for (int i = 1; i <= n; i += 2) {
            cout << i + 1 << " " << i << " ";
        }
        cout << endl;
    }
}
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
 
  int t=1; //cin>>t;
  while(t--){
    solve();
  }
    return 0;
}
/*int overflow , array bounds  special cases (n=1?) 
 do smth instead of nothing !
 WRITE STUFF DOWN DON'T GET STUCK ON ONE APPROACH*/