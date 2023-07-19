#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

const int MAX = 1E4;

int a[MAX + 3];

bool check(int l, int r) {
    l++;
    r++;
    while (l <= r - 1 && a[l] <= a[l + 1]) l++;
    while (l <= r - 1 && a[l] >= a[l + 1]) l++;
    return l == r;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 1 ; i <= n; i++) cin >> a[i];
        int l, r;
        cin >> l >> r;
        cout << (check(l, r) ? "Yes" : "No") << endl;
    }
}
