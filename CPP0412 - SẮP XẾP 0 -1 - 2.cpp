#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int cnt[5];
        memset(cnt, 0, sizeof cnt);
        while (n--) {
            int x;
            cin >> x;
            cnt[x]++;
        }
        for (int i = 0 ; i < 3; i++) {
            for (int j = 0 ; j < cnt[i]; j++) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
}