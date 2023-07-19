using ull = unsigned long long;
using ll = long long;
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, x;
    cin >> n >> k >> x;
    int left = n % k;
    vector<int> numbers;
    int sum = 0;
    if (k == x || left == x || ((n%2!=0)&&(x==1))) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        while (sum != n && (n - sum >= k)) {
            sum += k;
            numbers.push_back(k);
        }
        if (n - sum > 0&& (n-sum)!=x) {
            numbers.push_back(n - sum);
        }
        cout << numbers.size() << endl;
        for (auto it : numbers) {
            cout << it << " ";
        }
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
