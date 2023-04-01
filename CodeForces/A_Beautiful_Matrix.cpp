using Ull = unsigned long long;
using ll = long long;
#include<bits/stdc++.h>
using namespace std;
 
 void solve(){ 
    // i=3 , j=2
    int one=0;
        for (int i = 1; i <=5; ++i)
    {
        for (int j = 1; j <=5; ++j)
        {
            cin >> one;
            if (one == 1)
            {
                cout << abs(i - 3) + abs(j - 3) << endl;
            }
        }
    }
}

  int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 

    solve();
    return 0;
}