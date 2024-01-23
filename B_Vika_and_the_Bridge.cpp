#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

int solve(){
    int n; cin>>n;
    int even = 0, odd = 0;
    vector<int>v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if(v[i] % 2) odd++;
        else even++;
    }
    if(even > odd) {
        for(int i = 0; i < n; i++){
            if(v[i] % 2) return i + 1;
        }
    } else {
        for(int i = 0; i < n; i++){
            if(v[i] % 2 == 0) return i + 1;
        }
    }

    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t ; cin >> t;
    while(t--) {
        int ans = solve();
        cout << ans << endl;
    }
    return 0;
}

/*int overflow , array bounds  special cases (n=1?) 
 do smth instead of nothing !
 WRITE STUFF DOWN DON'T GET STUCK ON ONE APPROACH*/