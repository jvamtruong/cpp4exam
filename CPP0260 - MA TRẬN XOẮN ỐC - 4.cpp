#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int ans[n + 3][n + 3];
    vector < int > v;
    v.push_back(-1);
    for (int i = 0 ; i < n * n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int l = 1;
    int r = n;
    int u = 1;
    int d = n;
    int cnt = 1;
    while (1) {
        for (int i = l ; i <= r; i++) ans[u][i] = v[cnt++];
        if (cnt == n * n + 1) break;
        u++;
        for (int i = u ; i <= d; i++) ans[i][r] = v[cnt++];
        if (cnt == n * n + 1) break;
        r--;
        for (int i = r ; i >= l; i--) ans[d][i] = v[cnt++];
        if (cnt == n * n + 1) break;
        d--;
        for (int i = d ; i >= u; i--) ans[i][l] = v[cnt++];
        if (cnt == n * n + 1) break;
        l++;
    }
    for (int i = 1 ; i <= n; i++) {
        for (int j = 1 ; j <= n; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}