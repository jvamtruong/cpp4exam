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
        int cnt = 0;
        while (n--) {
            int x;
            cin >> x;
            cnt += (x == k);
        }
        cout << (cnt == 0 ? -1 : cnt) << endl;
    }
}