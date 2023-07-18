#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

long long f[95];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    f[0] = 0; // :((
    f[1] = f[2] = 1;
    for (int i = 3 ; i <= 92; i++) f[i] = f[i - 1] + f[i - 2];
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        int idx = lower_bound(f, f + 93, n) - f;
        cout << (f[idx] == n ? "YES" : "NO") << endl;
    }
}
