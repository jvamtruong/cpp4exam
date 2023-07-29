#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

bool check(string s) {
    int base = 1;
    int ans = 0;
    for (int i = s.length() - 1 ; i >= 0; i--) {
        ans += base * (s[i] - '0') % 5;
        base = (base << 1) % 5;
    }
    return ans % 5 == 0;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << (check(s) ? "Yes" : "No") << endl;
    }
}