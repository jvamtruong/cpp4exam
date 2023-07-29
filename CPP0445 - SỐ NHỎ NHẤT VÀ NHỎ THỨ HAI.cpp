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
        for (int i = 0 ; i < n; i++) cin >> a[i];
        sort(a, a + n);
        if (a[0] != a[1]) cout << a[0] << " " << a[1] << endl;
        else cout << -1 << endl;
    }
}