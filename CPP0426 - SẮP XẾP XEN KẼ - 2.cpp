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
        sort(a + 1, a + n + 1, greater<int>());
        int l = 1;
        int r = n;
        while (l <= r) {
            if (l == r) cout << a[l++];
            else cout << a[l++] << " " << a[r--] << " ";
        }
        cout << endl;
    }
}