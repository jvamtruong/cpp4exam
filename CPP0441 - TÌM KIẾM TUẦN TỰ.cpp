#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int idx = -1;
        for (int i = 1 ; i <= n; i++) {
            int x;
            cin >> x;
            if (x == k && idx == -1) idx = i;
        }
        cout << idx << endl;
    }
}