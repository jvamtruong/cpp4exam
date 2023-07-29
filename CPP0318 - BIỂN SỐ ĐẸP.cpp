#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

bool check(string s) {
    string cur = "";
    for (int i = 5 ; i < s.length(); i++) {
        if (s[i] != '.') cur += s[i];
    }
    bool bl = true;
    for (int i = 0 ; i < cur.length() - 1; i++) {
        if (cur[i] >= cur[i + 1]) {
            bl = false;
            break;
        }
    }
    if (bl) return true;
    bl = true;
    for (int i = 0 ; i < cur.length() - 1; i++) {
        if (cur[i] != cur[i + 1]) {
            bl = false;
            break;
        }
    }
    if (bl) return true;
    bl = true;
    bl &= (cur[0] == cur[1] && cur[1] == cur[2] && cur[3] == cur[4]);
    if (bl) return true;
    bl = true;
    for (char ch : cur) {
        if (ch != '6' && ch != '8') {
            bl = false;
            break;
        }
    }
    return bl;
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