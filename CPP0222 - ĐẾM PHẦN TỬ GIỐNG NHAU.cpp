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
        map < int, int > cnt[n + 3];
        set < int > s;
        for (int i = 0 ; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int x;
                cin >> x;
                s.insert(x);
                if (cnt[i][x] == 0) cnt[i][x] = 1;
            }
        }
        int ans = 0;
        for (auto x : s) {
            int cur = 0;
            for (int i = 0 ; i < n; i++) cur += cnt[i][x];
            ans += (cur == n); 
        }
        cout << ans << endl;
    }
}