#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

struct point {
    long long x, y;
};

double diff(point a, point b) {
    return a.x * b.y - a.y * b.x;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        point a[n + 3];
        for (int i = 0 ; i < n; i++) cin >> a[i].x >> a[i].y;
        a[n] = a[0];
        double ans = 0;
        for (int i = 0 ; i < n; i++) ans += diff(a[i], a[i + 1]);
        cout << fixed << setprecision(3) << ans / 2 << endl;
    }
}