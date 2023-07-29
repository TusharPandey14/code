    #include<bits/stdc++.h>
    using namespace std;
    using ll = long long;
    using ull = unsigned long long;
     
    int f(int ind , int w , vector<int>& wt,vector<vector<int>> &dp){
        if (ind <=0 || w <= 0)
            return 0;
     
        if (dp[ind][w] != -1)
            return dp[ind][w];
     
        int not_take =0+ f(ind - 1, w, wt,dp);
        int take = 0;
        if (wt[ind] <= w) {
            take = 1 + f(ind - 1, w - wt[ind], wt,dp);
        }
     
        return dp[ind][w] = max(take, not_take);
    }
     
    void solve() {
        int n; cin >> n;
        int w; cin >> w;
        vector<int> wt(n);
        for (int i = 0; i < n; i++) {
            cin >> wt[i];
        }
     
        vector<vector<int>> dp(n, vector<int>(w + 1, -1));
        cout << f(n - 1, w, wt,dp) << endl;
    }
     
    int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
     
        // int t = 1; //cin>>t;
        // while (t--) {
        //     solve();
        // }
        solve();
        return 0;
    }
     
    /*int overflow , array bounds  special cases (n=1?) 
     do smth instead of nothing !
     WRITE STUFF DOWN DON'T GET STUCK ON ONE APPROACH*/