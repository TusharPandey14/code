#include<bits/stdc++.h>
using namespace std;

bool tell(vector<long long >& a, long long  n, long long  k) {
    long long  last = n - 1;
    long long  cnt = 0;
    for(long long i=0;i<n;i++) {
        if (a[i] == a[0])
            cnt++;
        if (cnt == k) {
            last = i;
            break;
        }
    }
    if (cnt < k) {
        return false;
    } else {
        if (a[0] == a[n - 1]) {
            return true;
        }
    }

    cnt = 0;
    for (int i = n - 1; i > last; i--) {
        if (a[i] == a[n - 1])
            cnt++;
    }

    return (cnt >= k);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long  n, k;
        cin >> n >> k;

        vector<long long > a(n);
        for(long long i=0;i<n;i++) {
            cin >> a[i];
        }
        if (tell(a, n, k)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
