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
        int a[n + 3][n + 3];
        int row[n + 3] = {};
        int col[n + 3] = {};
        int maxval = -1;
        bool bl = false;
        for (int i = 0 ; i < n; i++) {
            for (int j = 0 ; j < n; j++) {
                cin >> a[i][j];
                row[i] += a[i][j];
            }
            maxval = max(maxval, row[i]);
        }
        for (int j = 0 ; j < n; j++) {
            for (int i = 0 ; i < n; i++) {
                col[j] += a[i][j];
            }
            if (col[j] > maxval) {
                maxval = col[j];
                bl = true;
            }
        }
        int ans = 0;
        if (!bl) for (int i = 0 ; i < n; i++) ans += maxval - row[i];
        else for (int i = 0 ; i < n; i++) ans += maxval - col[i];
        cout << ans << endl;
    }
}