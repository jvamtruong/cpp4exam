#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

const int MOD = 1E9 + 7;

long long gcd(long long a, long long b) {
	return b ? gcd(b, a % b) : a;
}

long long fpow(long long a, long long n) {
	if (n == 0) return 1;
	if (n == 1) return a % MOD;
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
		int n;
		cin >> n;
		long long _gcd = 0;
		long long p = 1;
		while (n--) {
			long long x;
			cin >> x;
			p *= x;
			p %= MOD;
			_gcd = gcd(_gcd, x);
		}
		cout << fpow(p, _gcd) << endl;
	}
}

