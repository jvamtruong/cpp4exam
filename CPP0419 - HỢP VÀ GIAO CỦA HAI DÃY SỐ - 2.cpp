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
        n += m;
        map < int, int > cnt;
        while (n--) {
            int x;
            cin >> x;
            cnt[x]++;
        }
        for (auto i : cnt) cout << i.first << " ";
        cout << endl;
        for (auto i : cnt) if (i.second == 2) cout << i.first << " ";
        cout << endl;
    }
}