#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n, q;
		cin >> n >> q;
		int f[n + 3];
		for (int i = 1 ; i <= n; i++) {
			int x;
			cin >> x;
			f[i] = f[i - 1] + x;
		}
		while (q--) {
			int l, r;
			cin >> l >> r;
			cout << f[r] - f[l - 1] << endl;
		}
	}
}
