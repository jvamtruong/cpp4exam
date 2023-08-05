#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string s;
        int k;
        cin >> s >> k;
        set < char > bst;
        int ans = 0;
        for (int i = 0 ; i < s.length(); i++) {
            map < char, bool > bst;
            int cnt = 0;
            for (int j = i; j < s.length(); j++) {
                if (!bst[s[j]]) {
                    bst[s[j]] = true;
                    cnt++;
                }
                ans += (cnt == k);
                if (cnt > k) break;
            }
        }
        cout << ans << endl;
    }
}