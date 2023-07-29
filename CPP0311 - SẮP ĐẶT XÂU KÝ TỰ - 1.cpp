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
        map < char, int > cnt;
        int max_val = -1;
        for (char ch : s) max_val = max(max_val, ++cnt[ch]);
        cout << (2 * max_val <= s.length() + 1) << endl;
    }
}