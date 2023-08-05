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
        int a[n + 3][m + 3], b[n + 3][m + 3] = {};
        for (int i = 0 ; i < n; i++) {
            for (int j = 0 ; j < m; j++) {
                cin >> a[i][j];
            }
        }
        for (int i = n - 1 ; i >= n / 2; i--) {
            for (int j = n - i ; j <= i; j++) {
                b[n - i - 1][j] = a[n - i - 1][j - 1];
                b[i][j - 1] = a[i][j];
                b[j][i] = a[j - 1][i];
                b[j - 1][n - i - 1] = a[j][n - i - 1];
            }
        }
        for (int i = 0 ; i < n; i++) {
            for (int j = 0 ; j < m; j++) {
                cout << (b[i][j] ? b[i][j] : a[i][j]) << " ";
            }
        }
        cout << endl;
    }
}