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
        map < long long, int > cnt;
        for (int i = 0 ; i < n; i++) {
            long long x;
            cin >> x;
            cnt[x]++;
        }
        for (int i = 0 ; i < n; i++) if (cnt[i]) cout << i << " "; else cout << -1 << " ";
        cout << endl;
    }
}