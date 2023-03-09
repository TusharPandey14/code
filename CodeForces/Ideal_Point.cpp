#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
         int segment_x=0;
            int segment_y=0;
        while(n--){
            int left,right;
            cin>>left>>right;
           
            if(k==left) segment_x++;
            if(k==right) segment_y++;
           
        }
         if(segment_x>0 && segment_y>0) {
            cout<<"YES"<<endl; 
         }
         else cout<<"NO"<<endl;
    }
    return 0;
}