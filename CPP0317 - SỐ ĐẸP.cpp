#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

bool check(string s) {
    for (auto ch : s) if (ch - '0' & 1) return false;
    string cur = s;
    reverse(s.begin(), s.end());
    return cur == s;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << (check(s) ? "YES" : "NO") << endl;
    }
}