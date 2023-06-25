#include<bits/stdc++.h>
using namespace std;
int main() {
    string genome1, genome2;
    cin >> genome1 >> genome2;

    unordered_map<char, int> freq1, freq2;
    for (char c : genome1) {
        freq1[c]++;
    }
    for (char c : genome2) {
        freq2[c]++;
    }

    if (freq1 == freq2) {
        cout << "YES" << endl;
    } else {
        int diff_count = 0;
        for (auto p : freq1) {
            char c = p.first;
            if (freq1[c] != freq2[c]) {
                diff_count++;
                if (diff_count > 2) {
                    break;
                }
            }
        }

        if (diff_count == 2) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
