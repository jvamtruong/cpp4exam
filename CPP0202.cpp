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
        for (int i = 0 ; i < n; i++) cin >> a[i];
        if (n == 1) {
            cout << a[0] << endl;
            continue;
        }
        sort(a, a + n);
        int ans = 1E3 + 3;
        for (int i = 1 ; i < n; i++) {
            ans = min(ans, abs(a[i] - a[i - 1]));
        }
        cout << ans << endl;
    }
}


