using Ull = unsigned long long;
using ll = long long;
#include<bits/stdc++.h>
using namespace std;


 
 void solve(){ 
    int y; cin>>y;

    while (true) {
        y++;
        string year = to_string(y);
        unordered_set<char> digits;
        bool distinct = true;
        for (char digit : year) {
            if (digits.count(digit) > 0) { // set.count(ele)
                distinct = false;
                break;
            }
            digits.insert(digit);
        }
        if (distinct) {
            cout << y << endl;
            break;
        }
    }
    
}

  int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 

    solve();
    return 0;
}
