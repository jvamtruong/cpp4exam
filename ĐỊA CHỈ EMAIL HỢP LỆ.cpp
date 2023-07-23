#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

bool check(string s) {
    int at = 0;
    int space = 0;
    for (auto ch : s) {
        at += (ch == '@');
        space += (ch == ' ');
        if (at > 1) return false;
        if (space) return false;
    }
    if (at == 0) return false;
    for (auto ch : s) {
        if (ch == '@') continue;
        if (!(('A' <= ch && ch <= 'Z') || ('a' <= ch && ch <= 'z') || ('0' <= ch && ch <= '9') || ch == '.' || ch == '_')) return false;
    }
    int at_idx = 0;
    for (int i = 0 ; i < s.length(); i++) {
        if (s[i] == '@') {
            at_idx = i;
            break;
        }
    }
    if (at_idx > 64 || at_idx == 0) return false;
    if (s.length() - (at_idx + 1) > 254) return false;
    for (int i = at_idx + 1 ; i < s.length() - 1; i++) {
        if (s[i] == '.' && s[i + 1] == '.') return false;
    }
    int dot_idx = -1;
    for (int i = at_idx + 1 ; i < s.length(); i++) {
        if (s[i] == '.') {
            dot_idx = i;
            break;	
        }
    }
    if (dot_idx == -1 || dot_idx == s.length() - 1 || dot_idx == at_idx + 1) return false;
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        cout << (check(s) ? "YES" : "NO") << endl;
    }
}