using Ull = unsigned long long;
using ll = long long;
#include<bits/stdc++.h>
using namespace std;
 
 void solve(){ 
    string s; cin>>s;
    // lower case
    transform(s.begin(),s.end(),s.begin(),::tolower);
    string vowel="aoyeui";
    string res="";
    for(char letter:s){
        if (vowel.find(letter) != string::npos){
             continue;  // skip vowel letters
        }
        else {
            res += tolower(letter); 
        }
    }
    for(auto it:res){
        cout<<"."<<it;
    }
    cout<<endl;
}

  int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 

    solve();
    return 0;
}