#include<bits/stdc++.h>

using namespace std;

int findWinner(int n, vector<pair<int, int>>& solutionB) {
    int GQ=INT_MIN;
    int Winn = 0;

    for (int i = 0; i < n; i++) {
        int W = solutionB[i].first;
        int Q = solutionB[i].second;

        if (W <= 10 && Q > GQ) {
            GQ = Q;
            Winn = i;
        }
    }

    return Winn;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        
        int n ; cin>>n;
        vector<pair<int,int>>solutionB;
        for(int i=0;i<n;i++){
            int W,Q;
            cin>>W>>Q;
            solutionB.push_back({W,Q});
        }
        vector<int>ans;
        int Winn=findWinner(n,solutionB);
        ans.push_back(Winn);

        for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i]+1<< endl;
    }

    }
    return 0;
}
