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
        map < int, int > cnt;
        int ans = -1;
        while (n--) {
            int x;
            cin >> x;
            cnt[x]++;
            if (cnt[x] > 1 && ans == -1) ans = x;
        }
        cout << ans << endl;
    }
}