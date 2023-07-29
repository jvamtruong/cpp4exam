#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

bool check(string s) {
    int ans = 0;
    for (char ch : s) ans = (ans * 10 + (ch - '0')) % 11;
    return ans == 0;
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