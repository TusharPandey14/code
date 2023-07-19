using Ull = unsigned long long;
using ll = long long;
#include<bits/stdc++.h>
using namespace std;
 
 void solve(){ 
    int ax,ay,bx,by,cx,cy;
    cin>>ax>>ay>>bx>>by>>cx>>cy;
    int ans=1;
    if((bx<ax && cx<ax)||(bx>ax && cx>ax)){
        ans+=min(abs(bx-ax),abs(cx-ax));
    }
    if((by<ay && cy<ay)||(by>ay && cy>ay)){
        ans+=min(abs(by-ay),abs(cy-ay));
    }
    cout<<ans<<endl;
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