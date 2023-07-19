#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector < int > v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    int cur = 0;
    while (1) {
        cur = v[v.size() - 1] + v[v.size() - 2];
        if (cur > 1000) break;
        else v.push_back(cur);
    }
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        while (n--) {
            int x;
            cin >> x;
            int idx = lower_bound(v.begin(), v.end(), x) - v.begin();
            if (v[idx] == x) cout << x << " ";
        }
        cout << endl;
    }
}
