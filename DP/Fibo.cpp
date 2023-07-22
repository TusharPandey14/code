#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

//BY -Memorization
// int f(int n, vector<int>&dp){
//     if(n<=1)return n;
//     if(dp[n]!=-1)return dp[n];
//     return dp[n]=f(n-1,dp)+f(n-2,dp);
    
// }

// BY Tabulation
// void f(int n, vector<int>&dp){
//   dp[0]= 0;
//   dp[1]= 1;
  
//   for(int i=2; i<=n; i++){
//       dp[i] = dp[i-1]+ dp[i-2];
//   }
//   cout<<dp[n];
// }
 
 // Space Optimization
 void f(int n){
    int prev=1;
    int prev2=0;
    for(int i=2;i<=n;i++){
        int cur_i = prev2+ prev;
        prev2=prev;
        prev=cur_i;
    }
    cout<<prev;
 }
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
 
   int n ; cin>>n;
   vector<int>dp(n+1,-1);
   //1. cout<<f(n,dp); T.C-> O(2^N) | sc-> O(N)
   //2. f(n,dp); T.C-> O(N) | sc-> O(N)+O(N)
   f(n); // 3 .  T.C-> O(N) | sc-> O(1)
   return 0;
}