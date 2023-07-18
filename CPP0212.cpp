#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

const int MOD = 1E9 + 7;

long long fpow(long long a, long long n) {
	if (n == 0) return 1;
	if (n == 1) return a;
	long long res = fpow(a, n >> 1);
	if (n & 1) return res * res % MOD * a % MOD;
	return res * res % MOD;
}

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n, x;
		cin >> n >> x;
		long long ans = 0;
		if (n == 0) {
			cout << x << endl;
			continue;
		}
		for (int i = n - 1; i >= 0; i--) {
			long long p;
			cin >> p;
			ans += p * fpow(x, i) % MOD;
			ans %= MOD;
		}
		cout << ans << endl;
	}
}
