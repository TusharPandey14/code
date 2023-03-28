using ll = long long;
#include<bits/stdc++.h>
using namespace std;
 
 void solve(){ 
        int n,s,r;
        cin>>n>>s>>r;
       vector<int>v;
        //max =s-r
        v.push_back(s-r);
        int a=r/(n-1);
        int mod=r%(n-1);
        for(int i=0; i<n-1; i++)
        {
            if(mod>0)
            {
                v.push_back(a+1);
                mod--;
            }
            else
            {
                v.push_back(a);
            }
        }
        sort(v.begin(),v.end());
        for(int i=0; i<v.size(); i++)
            cout<<v[i]<<" ";
 
        cout<<endl;
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