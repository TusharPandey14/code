using Ull = unsigned long long;
using ll = long long;
#include<bits/stdc++.h>
using namespace std;
 
 void solve(){ 
          int n; cin >> n;
          int ar[n];
          int sum = 0;
          int flg = 0;
          for(int i = 0; i < n; i++)
          {
               cin >> ar[i];
               sum += ar[i];
               if (ar[i] == -1)
               {
                 flg = 1;
               }
          }
          for(int i=1;i<n;i++)
          {
               if ((ar[i - 1] == -1) && (ar[i] == -1))
               {
                    flg = 2;
               }
          }
          if (flg == 2)
          {
               cout << sum + 2 + 2 << endl;
          }
          else if (flg)
          {
               cout << sum << endl;
          }
          else
          {
               cout << sum - 4 << endl;
          }
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