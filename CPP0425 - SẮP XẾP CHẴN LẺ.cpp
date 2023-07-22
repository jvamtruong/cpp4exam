#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n + 3];
        int ans[n + 3];
        for (int i = 0 ; i < n; i++) cin >> a[i];
        sort(a, a + n);
        int idx = 0;
        for (int i = 0 ; i < n; i += 2) ans[i] = a[idx++];
        for (int i = 1; i < n; i += 2) ans[i] = a[idx++];
        for (int i = 0 ; i < n; i++) cout << ans[i] << " ";
        cout << endl;
    }
}