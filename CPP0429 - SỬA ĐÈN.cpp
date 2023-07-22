#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k, b;
    cin >> n >> k >> b;
    int a[n + 3];
    memset(a, 0, sizeof a);
    while (b--) {
        int x;
        cin >> x;
        a[x] = 1;
    }    
    int cnt[n + 3];
    memset(cnt, 0, sizeof cnt);
    for (int i = 1 ; i <= n; i++) cnt[i] = cnt[i - 1] + a[i];
    int ans = n + 3;
    for (int i = 1 ; i + k - 1 <= n; i++) {
        ans = min(ans, cnt[i + k - 1] - cnt[i - 1]);
    }
    cout << ans;
}