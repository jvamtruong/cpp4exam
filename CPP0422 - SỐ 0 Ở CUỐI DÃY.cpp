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
        int cnt = 0;
        for (int i = 0 ; i < n; i++)  {
            cin >> a[i];
            cnt += (a[i] == 0);
        }
        for (int i = 0 ; i < n; i++) if (a[i]) cout << a[i] << " ";
        while (cnt--) cout << 0 << " ";
        cout << endl;
    }
}