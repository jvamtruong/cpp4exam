#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n + 3][m + 3] = {};
        for (int i = 1 ; i <= n; i++) {
            for (int j = 1 ; j <= m; j++) {
                cin >> a[i][j];
                if (i && a[i][j]) a[i][j] = a[i - 1][j] + 1;
            }
        }
        for (int i = 1 ; i <= n; i++) sort(a[i] + 1, a[i] + m + 1, greater < int >());
        int ans = 0;
        for (int i = 1 ; i <= n; i++) {
            int w = 1;
            for (int j = 1 ; j <= m; j++) {
                ans = max(ans, a[i][j] * w);
                w++;
            }
        }
        cout << ans << endl;
    }
}