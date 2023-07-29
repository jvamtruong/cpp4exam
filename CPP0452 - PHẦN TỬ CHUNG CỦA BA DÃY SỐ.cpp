#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        vector < long long > a(x), b(y), c(z);
        for (auto& val : a) cin >> val;
        for (auto& val : b) cin >> val;
        for (auto& val : c) cin >> val;
        int i, j, k;
        i = j = k = 0;
        bool bl = false;
        while (i < x && j < y && k < z) {
            if (a[i] == b[j] && b[j] == c[k]) {
                cout << a[i] << " ";
                i++;
                j++;
                k++;
                bl = true;
            }
            else if (a[i] < b[j]) i++;
            else if (b[j] < c[k]) j++;
            else k++;
        }
        if (!bl) cout << -1;
        cout << endl;
    }
}