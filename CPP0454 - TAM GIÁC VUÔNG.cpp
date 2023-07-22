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
        long long a[n + 3];
        for (int i = 1 ; i <= n; i++) {
            cin >> a[i];
            a[i] *= a[i];
        }
        if (n < 3) {
            cout << "NO" << endl;
            continue;
        }
        sort(a + 1, a + n + 1);
        bool bl = false;
        for (int i = 3 ; i <= n; i++) {
            int l = 1;
            int r = i - 1;
            while (l <= r) {
                if (a[l] + a[r] == a[i]) {
                    bl = true;
                    break; 
                }
                if (a[l] + a[r] > a[i]) r--;
                else l++;
            }
            if (bl) break;
        }
        cout << (bl ? "YES" : "NO") << endl;
    }
}