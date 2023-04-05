using Ull = unsigned long long;
using ll = long long;
#include<bits/stdc++.h>
using namespace std;
 
 void solve(){ 
    string s; cin>>s;
    int cntL=0,cntU=0;
    for(auto it:s){
        if(it>=97 &&it<=122) cntL++; // lower case
        else cntU++;
    }
    if(cntL>cntU){
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    else if(cntL==cntU) transform(s.begin(), s.end(), s.begin(), ::tolower);
    else transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout<<s<<endl;
}

  int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
      solve();
    return 0;
}