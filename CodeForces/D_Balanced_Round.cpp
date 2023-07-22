#include <bits/stdc++.h>
using namespace std;

int BALANCEDROUND(vector<int>& nums, int k) {
    int n = nums.size();
    sort(nums.begin(), nums.end());

    vector<int> dp(n, 1);
    
    for (int i = 1; i < n; i++) {
        for (int j = i - 1; j >= 0; j--) {
            if (nums[i] - nums[j] <= k) {
                dp[i] = max(dp[i], dp[j] + 1);
            } else {
                break; 
            }
        }
    }

    return *max_element(dp.begin(), dp.end());
}

int main() {
   ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> QuesDIF(n);
        for (int i = 0; i < n; i++) {
            cin >> QuesDIF[i];
        }
        
        int Fans=BALANCEDROUND(QuesDIF,k);
        cout<<n-Fans<<endl;
    }

    return 0;
}
