#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n + 3][n + 3];
    for (int i = 1 ; i <= n; i++) {
        for (int j = 1 ; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    int m;
    cin >> m;
    int b[m + 3][m + 3];
    for (int i = 1 ; i <= m; i++) {
        for (int j = 1 ; j <= m; j++) {
            cin >> b[i][j];
        }
    }
    for (int i = 1 ; i <= n; i += m) {
        for (int j = 1 ; j <= n; j += m) {
            for (int l = i ; l <= i + m - 1 ; l++) {
                for (int r = j ; r <= j + m - 1; r++) {
                    a[l][r] *= b[l - i + 1][r - j + 1];
                }
            }
        }
    }
    for (int i = 1 ; i <= n; i++) {
        for (int j = 1 ; j <= n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}