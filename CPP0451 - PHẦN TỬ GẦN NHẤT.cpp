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
        vector < int > a(n); // n <= 10^6 , khai bao int a[n] ==> WA  :((
        for (int i = 0 ; i < n; i++) cin >> a[i];
        int k, x;
        cin >> k >> x;
        int idx = lower_bound(a.begin(), a.end(), x) - a.begin();
        for (int i = k / 2 ; i >= 1; i--) cout << a[idx - i] << " ";
        if (a[idx] == x) idx++;
        for (int i = 0 ; i < k / 2; i++) cout << a[idx + i] << " ";
        cout << endl;
    }
}