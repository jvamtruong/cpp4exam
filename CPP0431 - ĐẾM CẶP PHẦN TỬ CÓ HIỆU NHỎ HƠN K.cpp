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
        for (int i = 0 ; i < n; i++) cin >> a[i];
        sort(a, a + n);
        long long ans = 0;
        for (int i = 1 ; i < n; i++) {
            int idx = lower_bound(a, a + i, a[i] - k + 1) - a;
            ans += i - idx;
        }
        cout << ans << endl;
    }
}