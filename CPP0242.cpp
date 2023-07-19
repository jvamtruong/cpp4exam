#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

const int MAX = 1E3;
int f1[MAX + 3];
int f2[MAX + 3];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 1 ; i <= n; i++) {
            int x;
            cin >> x;
            f1[i] = f1[i - 1] + x;
        }
        for (int i = 1 ; i <= n; i++) {
            int x;
            cin >> x;
            f2[i] = f2[i - 1] + x;
        }
        int ans = 1;
        for (int i = 1 ; i <= n; i++) {
            for (int j = 1 ; j <= n; j++) {
                if (f1[j] - f1[i - 1] == f2[j] - f2[i - 1]) 
                    ans = max(ans, j - i + 1);
            }
        }
        cout << ans << endl;
    }
}


