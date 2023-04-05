#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];

    int min_diff = abs(a[0] - a[1]);
    int idx1 = 0, idx2 = 1;
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n+i-1; j++) {
            int diff = abs(a[j%n] - a[i%n]);
            if(diff < min_diff) {
                min_diff = diff;
                idx1 = i%n;
                idx2 = j%n;
            }
        }
    }
    cout << idx1+1 << " " << idx2+1 << endl;

    return 0;
}
