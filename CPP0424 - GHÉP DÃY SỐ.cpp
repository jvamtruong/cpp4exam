#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int k, n;
        cin >> k >> n;
        vector < int > v;
        while (k--) {
            for (int i = 0 ; i < n; i++) {
                int x;
                cin >> x;
                v.push_back(x);
            }
        }
        sort(v.begin(), v.end());
        for (int i : v) cout << i << " ";
        cout << endl;
    }
}