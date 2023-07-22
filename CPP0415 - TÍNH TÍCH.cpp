#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int max_val = -1E9;
        int min_val = 1E9;
        while (n--) {
            int x;
            cin >> x;
            max_val = max(max_val, x);
        } 
        while (m--) {
            int x;
            cin >> x;
            min_val = min(min_val, x);
        }
        cout << 1ll * max_val * min_val << endl;
    }
}