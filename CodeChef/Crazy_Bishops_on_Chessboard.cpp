using Ull = unsigned long long;
using ll = long long;
#include<bits/stdc++.h>
using namespace std;
 
 void solve(){ 
    int n; cin>>n;
    int TDPB=0; 

    if(n%2==0) {
        TDPB=n/2-1; // even n 
    }
    else TDPB=n/2 ;
    //pair sum
    int sum=0; 
    vector<int>even;
    vector<int>odd;
    if(n%2==0){
        even.push_back(3*(n/2)-3);
    }
    else odd.push_back(3*(n/2)-1);
    if(n<=2) cout<<0<<endl;
    else if(n%2==0)cout<<even[0]<<endl;
    else cout<<odd[0]<<endl;

    
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