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
        int diff = 1E9;
        int ans = 0;
        for (int i = 1 ; i <= n; i++) cin >> a[i];
        for (int i = 1 ; i < n; i++) {
            for (int j = i + 1 ; j <= n; j++) {
                if (diff > abs(a[j] + a[i])) {
                    diff = abs(a[j] + a[i]);
                    ans = a[j] + a[i];
                }
            }
        }
        cout << ans << endl;
    }
}