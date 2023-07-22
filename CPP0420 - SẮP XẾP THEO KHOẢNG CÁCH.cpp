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
        int a[n + 3];
        vector < pair < int, int > > v;
        for (int i = 0 ; i < n; i++) {
            cin >> a[i];
            v.push_back({abs(a[i] - k), i});
        }
        sort(v.begin(), v.end());
        for (auto i : v) cout << a[i.second] << " ";
        cout << endl;
    }
}