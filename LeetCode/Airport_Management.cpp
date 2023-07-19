#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	     vector<int> ari(n);
         vector<int> dep(n);
         for (int i = 0; i < n; i++) {
        cin >> ari[i];
     }
    for (int i = 0; i < n; i++) {
        cin >> dep[i];
    }
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[dep[i]]++;
    }
    int sum=1;
    for(auto it:mp){
        if(it.second>1){
            sum+=it.second;
        }
    }
    cout<<sum<<endl;
	}
	return 0;
}
