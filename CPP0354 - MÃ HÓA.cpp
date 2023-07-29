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
        int cnt = 1;
        s += '@';
        for (int i = 0 ; i < s.length() - 1; i++) {
            if (s[i] == s[i + 1]) cnt++;
            else {
                cout << s[i] << cnt;
                cnt = 1;
            }
        }
        cout << endl;
    }
}