using ULL = unsigned long long;
#include<bits/stdc++.h>
using namespace std;
bool perfectsq(ULL prod){
    if (ceil((double)sqrt(prod)) == floor((double)sqrt(prod))) {
       return true;

    }
    return false;
}
 
 void solve(){ 
    ULL n; cin>>n;
    vector<ULL>v(n);
    ULL prod=1;
    for(ULL i=0;i<n;i++){
        cin>>v[i];
        prod*=v[i];
    }
   ULL sqprod=1;
   ULL i=0,newprod=1;
    if(prod==1) cout<<1<<endl;
    else if(perfectsq(prod)==true){
        
        while(sqprod!=sqrt(prod)){
            sqprod*=v[i];
            i++;
        }
        cout<<i<<endl;
     }
     else cout<<-1<<endl;
         
}

  int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 

    ULL t;  cin>>t ; 
    while(t--)
    {
      solve();
    }
    return 0;
}