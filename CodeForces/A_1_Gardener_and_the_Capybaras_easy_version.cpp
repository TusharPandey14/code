using Ull = unsigned long long;
using ll = long long;
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t, n, i, j;
    string a, b, c, s;
    cin>>t;
    for(;t--;)
    {
        cin>>s;
        n=s.size();
        if(s[0]==s[n-1]){
            a=s[0];
            c=s[n-1];
            b="";
            for(i=1; i<n-1; i++){
                b+=s[i];
            }
            cout<<a<<" "<<b<<" "<<c<<"\n";
        }else{
            if(s[0]==s[1]){
                a=s[0];
                b=s[1];
                c="";
                for(i=2; i<n; i++){
                    c+=s[i];
                }
            }else{
                if(s[0]=='a'){
                    a=s[0];
                    c=s[n-1];
                    b="";
                    for(i=1; i<n-1; i++){
                        b+=s[i];
                    }
                }else{
                    a=s[0];
                    b=s[1];
                    c="";
                    for(i=2; i<n; i++){
                        c+=s[i];
                    }
                }
            }
            cout<<a<<" "<<b<<" "<<c<<"\n";
        }
    }
}