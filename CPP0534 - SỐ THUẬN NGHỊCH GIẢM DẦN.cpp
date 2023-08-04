#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

bool check(string s) {
    if (s.length() == 1) return false;
    string cur = s;
    reverse(s.begin(), s.end());
    return cur == s;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    map < string, int , greater <string> > cnt;
    string s;
    while (cin >> s) {
        if (check(s)) {
            while (s.length() < 50) s = '0' + s;
            cnt[s]++;
        }
    }
    for (auto i : cnt) {
        string cur = i.first;
        while (cur.front() == '0') cur.erase(0, 1);
        cout << cur << " " << i.second << endl; 
    }
}