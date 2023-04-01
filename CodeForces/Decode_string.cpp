using Ull = unsigned long long;
using ll = long long;
#include<bits/stdc++.h>
using namespace std;

 char get(int i){
    return 'a'+i-1;
 }
 
 void solve(){ 
    int n; cin>>n;
    string s; cin>>s;
    string res="";
    int i=n-1;
    while(i>=0){
        if(s[i]!='0'){
            res+=get(s[i]-'0');
            i--;
        }
        else {
            res+=get(stoi(s.substr(i-2,2)));
            i-=3;
        }
    }
    reverse(res.begin(),res.end());
    cout<<res<<endl;
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