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
        long long m;
        cin >> s >> m;
        long long ans = 0;
        for (auto ch : s) ans = (ans * 10 + (ch - '0')) % m;
        cout << ans << endl;
    }
}