// .............................
using Ull = unsigned long long;
using ll = long long;
#include<bits/stdc++.h>
using namespace std;
 
 void solve(){ 
   vector<vector<char>> grid(8, vector<char>(8));
   for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
        cin>>grid[i][j];
    }
   }
    string ans=" ";
   for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
        if(grid[i][j]>='a' && grid[i][j]<='z'){
            ans+=grid[i][j];
        }
    }
   }
   // ans ->
    cout<<ans<<endl;
}

  int main(){
    
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
    int t; cin>>t;
    while(t--){
          solve();
    }
    
    return 0;
}