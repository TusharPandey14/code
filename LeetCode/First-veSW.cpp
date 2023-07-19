using Ull = unsigned long long;
using ll = long long;
#include<bits/stdc++.h>
using namespace std;
 
 vector<int> firstNegative(vector<int> arr, int n, int k) {
   queue<int> q;
    vector<int> ans;
    int i=0,j=0;
    while(j<n){
        if(arr[j]<0) q.push(j);
        if(j-i+1 <k) j++;
        else if(j-i+1==k){
            if(q.empty()) ans.push_back(0);
            else {
                ans.push_back(arr[q.front()]);
                if(i==q.front()) q.pop();
            }           
            i++;
            j++;
        }
    }
    return ans;
}

  int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
    int t=1; 
    while(t--){
        vector<int>arr={12,-1,-7,8,-15,30,16,28}; // o/p - -1 -1 -7 -15 -15 0 
        int k=3; // window size
        int n=arr.size(); 
        vector<int>final=firstNegative(arr,n,k);
        for(auto it:final) cout<<it<<" "; 
    }
    
    return 0;
}
