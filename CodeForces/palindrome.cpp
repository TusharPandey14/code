#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){

        int n; cin>>n;
        string s;
        vector<string>f; 
        for(int i=0;i<2*(n-1);i++){
           
           cin>>s;
        if(s.size()==n-1){
            f.push_back(s);
        }
        }
        reverse(f[0].begin(),f[0].end());
        if(f[0]==f[1]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}