using Ull = unsigned long long;
using ll = long long;
#include<bits/stdc++.h>
using namespace std;
 
 void solve(){ 
   // 1. check if m is prime
   // 2. check if m is next prime or not : { m>n } !!
   
    int n,m;
    cin>>n>>m;
    // int flag = 1;
    // double sqr=sqrt(m);
    //  for (int i = 2; i <= sqr; i++)
    // {
    //     if (m % i == 0) {
    //         flag = 0;
    //         break;
    //     }
    // }
    // if(flag==false || m<n) {
    //     cout<<"NO"<<endl;
    //     return ;
    // }
    int arr[15]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    bool find=false;
    for(int i=0;i<15;i++){
        if(arr[i]==n &&arr[i+1]==m) find=true;
    }
    if(find==true) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}

  int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 

    solve();
    return 0;
}