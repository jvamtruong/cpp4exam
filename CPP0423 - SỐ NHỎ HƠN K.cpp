#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n + 3];
        int cnt = 0;
        for (int i = 0 ; i < n; i++) {
            cin >> a[i];
            cnt += (a[i] <= k);
        }
        int cur = 0;
        for (int i = 0 ; i < cnt; i++) cur += (a[i] > k);
        int l = 0;
        int r = cnt;
        int ans = cur;
        while (r < n) {
            cur -= (a[l] > k);
            cur += (a[r] > k);
            l++;
            r++;
            ans = min(ans, cur);
        }
        cout << ans << endl;
    }
}