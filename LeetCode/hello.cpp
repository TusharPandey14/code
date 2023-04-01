#include<bits/stdc++.h>
using namespace std;

int solve(){

  int n;cin>>n;
  vector <int> v1(n);
  for(int i=0;i<n;i++){
    cin>>v1[i];
  }
  int count = 0;
  sort(v1.begin(), v1.end());
  
  for (int i = 0; i < n; i++){
    if(v1[i]-v1[i+1]==0 || (abs(v1[i]-v1[i+1])==1)) {
        count++;
    }
  }
  cout<<count<<endl;
// for(auto it : v1){
//     cout<<it<<" ";
// }
// cout<<endl;

  return 0;
}

int main(){
  int t;cin>>t;
  while(t--){
    solve();
  }
}