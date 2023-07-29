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
        for (auto& ch : s) if ('a' <= ch && ch <= 'z') ch = ' ';
        stringstream ss(s);
        string tok = "";
        int ans = 0;
        while (ss >> tok) ans += stoi(tok);
        cout << ans << endl;
    }
}