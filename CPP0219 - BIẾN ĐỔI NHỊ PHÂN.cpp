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
        int a[n + 3][m + 3];
        for (int i = 0 ; i < n; i++) {
            for (int j = 0 ; j < m; j++) {
                cin >> a[i][j];
            }
        }
        for (int i = 0 ; i < n; i++) {
            for (int j = 0 ; j < m; j++) {
                if (a[i][j] == 1) {
                    for (int k = 0 ; k < m; k++) if (a[i][k] == 0) a[i][k] = -1;
                    for (int k = 0; k < n; k++) if (a[k][j] == 0) a[k][j] = -1;
                }
            }
        }
        for (int i = 0 ; i < n; i++) {
            for (int j = 0 ; j < m; j++) {
                if (a[i][j] == 1 || a[i][j] == -1) cout << 1 << " ";
                else cout << 0 << " ";
            }
            cout << endl;
        }
    }
}