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
        cin >> s;
        int ans = 0;
        for (int i = 0 ; i < s.length(); i++) {
            for (int j = i ; j < s.length(); j++) {
                ans += (s[i] == s[j]);
            }
        }
        cout << ans << endl;
    }
}