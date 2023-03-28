using ll = long long;
#include<bits/stdc++.h>
using namespace std;

 void solve(){ 
    int n;  cin>>n;
    string s; cin>>s;
    int flag=0;
    int mid=n/2;
   for(int i=0;i<mid;i++){
    if(s[i]==s[n-1-i]) {
        if(flag==1)
        {
            flag=2; // second time found
        }
    }
    else {
        if(flag==2){
            cout<<"No"<<endl;
            return;
        }
        flag=1;
    }
  }
  cout<<"Yes"<<endl;
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