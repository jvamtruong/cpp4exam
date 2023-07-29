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
        map < int, int > cnt;
        for (int i = 1 ; i < n; i++) {
            int x;
            cin >> x;
            cnt[x]++;
        }
        for (int i = 1 ; i < n; i++) {
            if (cnt[i] == 0) {
                cout << i << endl;
                break;
            }
        }
    }
}