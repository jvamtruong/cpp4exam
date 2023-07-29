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
        for (auto ch : s) cnt[ch]++;
        for (auto ch : s) if (cnt[ch] == 1) cout << ch;
        cout << endl;
    }
}