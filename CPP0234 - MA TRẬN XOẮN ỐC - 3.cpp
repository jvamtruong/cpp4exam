#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        int a[n + 3][m + 3];
        for (int i = 1 ; i <= n; i++) {
            for (int j = 1 ; j <= m; j++) {
                cin >> a[i][j];
            }
        } 
        int l = 1;
        int r = m;
        int u = 1;
        int d = n;
        vector < int > v;
        while (1) {
            for (int i = l ; i <= r; i++) v.push_back(a[u][i]);
            if (v.size() == n * m) break;
            u++;
            for (int i = u ; i <= d; i++) v.push_back(a[i][r]);
            if (v.size() == n * m) break;
            r--;
            for (int i = r ; i >= l; i--) v.push_back(a[d][i]);
            if (v.size() == n * m) break;
            d--;
            for (int i = d ; i >= u; i--) v.push_back(a[i][l]);
            if (v.size() == n * m) break;
            l++;
        }
        cout << v[k - 1] << endl;
    }
}