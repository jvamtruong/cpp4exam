#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n + 3];
        for (int i = 0 ; i < n; i++) cin >> a[i];
        int ans = 0;
        for (int i = 0 ; i < n - 1; i++) {
            for (int j = i + 1 ; j < n; j++) {
                ans += (a[i] + a[j] == k);
            }
        }
        cout << ans << endl;
    }
}