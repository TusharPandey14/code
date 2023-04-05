using Ull = unsigned long long;
using ll = long long;
#include<bits/stdc++.h>
using namespace std;
 
 void solve(){ 
    string a,b,c;
    cin>>a>>b>>c;
    string s=a+b;
    sort(s.begin(),s.end());
    sort(c.begin(),c.end());
    bool flag=false;
    if(s.size()==c.size()) {
        for(int i=0;i<s.length();i++){
            if(s[i]!=c[i]) flag=true;
        }

    }
    if(flag || s.size()!=c.size() ) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;


}

  int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 

   solve();
    return 0;
}