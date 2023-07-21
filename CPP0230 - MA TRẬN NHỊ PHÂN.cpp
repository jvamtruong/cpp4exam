#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0 ; i < n; i++) {
        int cnt = 0;
        for (int j = 0 ; j < 3; j++) {
            int x;
            cin >> x;
            cnt += x;
        }
        ans += (cnt > 3 - cnt);
    }
    cout << ans;
}