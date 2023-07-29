#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
 
void solve(){
    int n; 
    int max_value=0,min_value=110;//to store min_indmum and maximum value
    int max_ind=0,min_ind=0;//to store maximum and min_indmum value index
    cin>>n;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        if(a>max_value){
            max_ind=i;
            max_value=a;
        }
        if(a<=min_value){
            min_ind=i;
            min_value=a;
        }
    }
    if(max_ind>min_ind){
        cout<<(max_ind-1)+(n-min_ind)-1;
    }else{
        cout<<(max_ind-1)+(n-min_ind);
    }
    

}
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
 
  int t=1; // cin>>t;
  while(t--){
    solve();
  }
    return 0;
}
/*int overflow , array bounds  special cases (n=1?) 
 do smth instead of nothing !
 WRITE STUFF DOWN DON'T GET STUCK ON ONE APPROACH*/