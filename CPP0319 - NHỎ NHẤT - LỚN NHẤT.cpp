#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

string minval(int n, int s) {
    string ans(n, '0');
    ans[0] = '1';
    s--;
    for (int i = n - 1 ; i >= 0; i--) {
        if (s > 9) {
            ans[i] = '9';
            s -= 9;
        }
        else {
            ans[i] += s;
            break;
        }
    }
    return ans;
}

string maxval(int n, int s) {
    string ans(n, '0');
    for (int i = 0 ; i < n; i++) {
        if (s > 9) {
            ans[i] = '9';
            s -= 9;
        }
        else {
            ans[i] += s;
            break;
        }
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, s;
    cin >> n >> s;
    if (s == 0 || s > 9 * n) cout << -1 << " " << -1;
    else cout << minval(n, s) << " " << maxval(n, s);
}