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
        int a[n + 3][n + 3];
        for (int i = 0 ; i < n; i++) {
            for (int j = 0 ; j < n; j++) {
                cin >> a[i][j];
            }
        }
        for (int i = 0 ; i < n; i++) {
            for (int j = 0 ; j < n; j++) {
                if (0 < i && i < n - 1 && 0 < j && j < n - 1) cout << " " << " ";
                else cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
}