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
        int min_val = 1E4;
        int max_val = -1;
        map < int, int > cnt;
        while (n--) {
            int x;
            cin >> x;
            min_val = min(min_val, x);
            max_val = max(max_val, x);
            cnt[x]++;
        }
        int ans = 0;
        for (int i = min_val ; i <= max_val; i++) ans += (cnt[i] == 0);
        cout << ans << endl;
    }
}