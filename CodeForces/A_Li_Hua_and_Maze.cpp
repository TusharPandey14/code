using Ull = unsigned long long;
using ll = long long;
#include<bits/stdc++.h>
using namespace std;
 
 void solve(){ 
  int n,m;
  cin>>n>>m;
  int a,b,c,d; cin>>a>>b>>c>>d;
  int ans1=4;
  if(a==1 || a==n) --ans1;
   if(b==1 || b==m) --ans1;
   int ans2=4;
  if(c==1 || c==n) --ans2;
  if(d==1 || d==m) --ans2;
  cout<<min(ans1,ans2)<<endl;

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