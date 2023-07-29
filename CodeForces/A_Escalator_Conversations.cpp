#include<bits/stdc++.h>
using namespace std;

int countConversations(int n, int m, int k, int H, vector<int>& heights) {
    int cnt = 0;
    sort(heights.begin(), heights.end());
    for (int i = 0; i < n; i++) {
        int heightDiff = abs(heights[i] - H);
        int stepDiff = heightDiff / k;
        if (stepDiff * k == heightDiff && heightDiff != 0 && heightDiff <= (m - 1) * k) {
            cnt++;
        }
    }
    return cnt;
}

signed main() {
    int t = 1;
    cin >> t;

    while (t--) {
        int n, m, k, H;
        cin >> n >> m >> k >> H;

        vector<int> heights(n);
        for (int i = 0; i < n; i++) {
            cin >> heights[i];
        }

        int result = countConversations(n, m, k, H, heights);
        cout << result << endl;
    }

    return 0;
}
