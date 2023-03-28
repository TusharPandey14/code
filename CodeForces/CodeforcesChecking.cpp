#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        string ques="codeforces";
        if(ques.find(s)!=string :: npos){
            cout<<"YES"<<endl;
        }
         else cout<<"NO"<<endl;
    }
    return 0;
}