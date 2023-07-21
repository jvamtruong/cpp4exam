#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m, p;
    cin >> n >> m >> p;
    int a[n + 3][m + 3];
    int b[m + 3][p + 3];
    int res[n + 3][p + 3];
    for (int i = 0 ; i < n; i++) {
        for (int j = 0 ; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0 ; i < m; i++) {
        for (int j = 0 ; j < p; j++) {
            cin >> b[i][j];
        }
    }
    memset(res, 0, sizeof res);
    for (int i = 0 ; i < n; i++) {
        for (int j = 0 ; j < p; j++) {
            for (int k = 0 ; k < m; k++) {
                res[i][j] += a[i][k] * b[k][j];
            }
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}