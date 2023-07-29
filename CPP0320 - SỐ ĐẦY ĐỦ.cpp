#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

string check(string s) {
    if (s[0] == '0') return "INVALID";
    for (auto ch : s) if (!('0' <= ch && ch <= '9')) return "INVALID";
    set < char > bst;
    for (auto ch : s) bst.insert(ch);
    return bst.size() == 10 ? "YES" : "NO";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << check(s) << endl;
    }
}