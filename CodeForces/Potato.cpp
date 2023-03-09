#include<bits/stdc++.h>
using namespace std; // Long long for last
void takeoffer(long long  a, long long  b,long long  n, long long  m,long long  &offercost,long long mini){
    long long  initialpotato=n;
    long long offer=(a*m);
    long long  rem_potato=n-m-1;
    while(rem_potato>m){
       {
        offercost+=(a*m); // again buy ... 
        rem_potato=rem_potato-m-1;
       }
    }
     offercost+=(rem_potato*mini);
        cout<<offercost<<endl;
}
int  main()
{
    long long  t; cin>>t;
    while(t--){
        long long  a,b,n,m;
        cin>>a>>b>>n>>m;
       // cout<<n<<" "<<m<<endl;
        long long   offer_cost =a*m; // buy first day
        long long  first=(a*n);
        long long  second=(b*n);
        int mini=min(a,b);
        if(n<m) // NO OFFER 
         cout<<min(first,second)<<endl; // else condition ?
        else   // OFFER LO
        takeoffer(a,b,n,m,offer_cost,mini);
        
    }
    return 0;
}