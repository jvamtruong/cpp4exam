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
        int sum = 0;
        for (auto i : cnt) {
            if ('0' <= i.first && i.first <= '9') sum += (i.first - '0') * i.second;
            else {
                for (int j = 0 ; j < i.second; j++) cout << i.first;
            }
        }
        cout << sum << endl;
    }
}