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
        for (int i = 1 ; i <= n; i++) {
            for (int j = 1 ; j <= m; j++) {
                cin >> a[i][j];
            }
        }
        int cnt = 0;
        int l = 1;
        int r = m;
        int u = 1;
        int d = n;
        while (1) {
            for (int i = l ; i <= r; i++) cout << a[u][i] << " ";
            cnt += r - l + 1;
            if (cnt == n * m) break;
            u++;
            for (int i = u ; i <= d; i++) cout << a[i][r] << " ";
            cnt += d - u + 1;
            r--;
            if (cnt == n * m) break;
            for (int i = r ; i >= l; i--) cout << a[d][i] << " ";
            cnt += r - l + 1;
            if (cnt == n * m) break;
            d--;
            for (int i = d ; i >= u; i--) cout << a[i][l] << " ";
            cnt += d - u + 1;
            l++;
            if (cnt == n * m) break;
        }
        cout << endl;
    }    
}