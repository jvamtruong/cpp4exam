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
        vector < int > v;
        for (int i = 0 ; i < n; i++) {
            cin >> a[i];
            v.push_back(a[i]);
        }
        sort(v.begin(), v.end());
        for (int i = 0 ; i < n; i++) a[i] -= v[i];
        int l = 0;
        for (int i = 0 ; i < n; i++) {
            if (a[i]) {
                l = i;
                break;
            }
        }
        int r = n - 1;
        for (int i = n - 1 ; i >= 0; i--) {
            if (a[i]) {
                r = i;
                break;
            }
        }
        cout << l + 1 << " " << r + 1 << endl;
    }
}