using Ull = unsigned long long;
using ll = long long;
#include<bits/stdc++.h>
using namespace std;
 
 void solve(){ 
    int ball; cin>>ball;
    vector<int>arr(ball);
    int sum=0;
    int ballcnt=0, cnt=0;
    for(int i=0;i<ball;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<ball;i++){
        sum+=arr[i];
        ballcnt++;
        float srate=(float)sum/ballcnt *100;
        if(srate/100==1) cnt++;
    }
    cout<<cnt<<endl;
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