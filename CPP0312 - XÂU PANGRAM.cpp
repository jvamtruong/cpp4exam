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
        int k;
        cin >> s >> k;
        map < char, int > cnt;
        for (char ch : s) cnt[ch]++;
        int total = 0;
        for (auto i : cnt) total += i.second - 1;
        cout << (26 - cnt.size() <= k && k <= total) << endl;
    }
}