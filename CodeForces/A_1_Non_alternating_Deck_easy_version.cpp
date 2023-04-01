using Ull = unsigned long long;
using ll = long long;
#include<bits/stdc++.h>
using namespace std;
const int MOD = 998244353;
int my_pow(int a, int b) {
	int r = 1;
	while (b) {
		if (b % 2) {
			r = (long long) r * a % MOD;
		}
		a = (long long) a * a % MOD;
		b /= 2;
	}
	return r;
}
 
 void solve(){ 
    int a,b;
    cin>>a>>b;
    cout<<my_pow(a,b);
}

  int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 

    int t=1;  cin>>t ; 
    while(t--)
    {
      solve();
    }
    return 0;
}