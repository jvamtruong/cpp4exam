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
        vector < int > v;
        while (n--) {
            int x;
            cin >> x;
            v.push_back(x);
        }
        if (n == 1) {
            cout << v[0] << endl;
            continue;
        }
        sort(v.begin(), v.end());
        int ans = 1E9 + 3;
        for (int i = 1 ; i < v.size(); i++) {
            ans = min(ans, abs(v[i] - v[i - 1]));
        }
        cout << ans << endl;
    }
}
