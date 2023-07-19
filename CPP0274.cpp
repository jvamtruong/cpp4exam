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
        while (n--) {
            int x;
            cin >> x;
            cnt[x]++;
        }
        int ans = 0;
        for (auto i : cnt) if (i.second > 1) ans += i.second;
        cout << ans << endl;
    }
}
