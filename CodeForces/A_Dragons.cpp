using Ull = unsigned long long;
using ll = long long;
#include<bits/stdc++.h>
using namespace std;
 
 void solve(){ 
    int kirito,total_drag;
    cin>>kirito>>total_drag;
    vector<pair<int,int> >dragons(total_drag);
    for(int i=0;i<total_drag;i++){
        cin>>dragons[i].first>>dragons[i].second;
    }
    sort(dragons.begin(),dragons.end());
    for(int i=0;i<total_drag;i++){
        if(kirito<=dragons[i].first){
            cout<<"NO"<<endl;
            return;
        }
        else 
        kirito += dragons[i].second; 
    }
    cout<<"YES"<<endl;

}

  int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
      solve();
    return 0;
}
//...........................
// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     int s, n;
//     cin >> s >> n;

//     vector<pair<int, int>> dragons(n);
//     for (int i = 0; i < n; i++) {
//         cin >> dragons[i].first >> dragons[i].second;
//     }

//     sort(dragons.begin(), dragons.end()); 
//     for (int i = 0; i < n; i++) {
//         if (s <= dragons[i].first) {
//             cout << "NO\n";
//             return 0;
//         }
//         s += dragons[i].second; 
//     }

//     cout << "YES\n";
//     return 0;
// }
