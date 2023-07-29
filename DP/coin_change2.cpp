//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends
class Solution {
  public:
   /* long long int solve(int ind , int coins[] , int sum , vector<vector<long long int>>&dp){
        if(ind==0){
            if(sum%coins[ind] == 0){
                return 1;
            }
            else{
                return 0;
            }
        }

        if(dp[ind][sum]!=-1){
            return dp[ind][sum];                       // Memorization .. 
        }
        
       long long int notake = solve(ind-1 , coins , sum ,dp);
       long long int take = 0;
        if(coins[ind]<=sum){
            take = solve(ind , coins , sum - coins[ind] , dp);
        }
        
        return dp[ind][sum] = take + notake;
    }*/
    long long int count(int coins[], int N, int sum) {

        // code here.
       
       // vector<vector<long long int>>dp(N+1 , vector<long long int>(sum+1 , -1));
            vector<long long int>prev(sum+1 , 0);
            vector<long long int>curr(sum+1 , 0);
        for(int i=0; i<=sum ; i++){
            if(i%coins[0] == 0){
                prev[i] = 1;
            }
            else{
                prev[i] = 0;                            // Space_Opti/Tabulation....
            }
        }
        
        for(int ind = 1 ; ind<N; ind++){
            for(int i=0; i<=sum ; i++){
               long long int notake = prev[i];
               long long int take = 0;
                if(coins[ind]<=i){
                    take = curr[i-coins[ind]];
                }
                
                curr[i] = take + notake;
            }
            prev = curr;
        }
        return prev[sum];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}