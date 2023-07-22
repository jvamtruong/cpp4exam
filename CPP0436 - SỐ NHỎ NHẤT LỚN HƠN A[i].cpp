#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n + 3];
        int cur[n + 3];
        for (int i = 0 ; i < n; i++) {
            cin >> a[i];
            cur[i] = a[i];
        }
        sort(cur, cur + n);
        for (int i = 0 ; i < n; i++) {
            int idx = upper_bound(cur, cur + n, a[i]) - cur;
            if (idx == n) cout << "_" << " "; // not found
            else cout << cur[idx] << " ";
        }
        cout << endl;
    }
}