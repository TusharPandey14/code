#include<bits/stdc++.h>
using namespace std;
bool checking(string s,int low,int high){
    while(low<=high){
     if(s[low++]!=s[high--]) return false;
    }
    return true;
}
int main()
{
    int t; cin>>t;
     while(t--){
     int n,m; cin>>n>>m;
        string s,t;
        cin>>s>>t;
        reverse(t.begin(),t.end());
        s+=t;
        int c=0; 
        for(int i=0;i<n+m;i++){
            if(s[i]==s[i+1]) c++;
        }
    if(c<=1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
        
   }    
   return 0;
}