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
        for (int i = 1 ; i <= n; i++) cin >> a[i];
        if (n == 1) {
            cout << a[1] << endl;
            continue;
        }
        for (int i = 1 ; i <= n; i++) {
            if (i == 1) cout << 1ll * a[i] * a[i + 1] << " ";
            else {
                if (i == n) cout << 1ll * a[i] * a[i - 1];
                else cout << 1ll * a[i - 1] * a[i + 1] << " ";
            }
        }
        cout << endl;
    }
}