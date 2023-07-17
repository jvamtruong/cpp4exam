#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

const int MAX = 1E5;

bool prime[MAX + 3];

void sieve() {
	for (int i = 2 ; i <= sqrt(MAX); i++) {
		if (!prime[i]) {
			for (int j = i * i ; j <= MAX; j += i) {
				prime[j] = 1;
			}
		}
	}
	prime[0] = prime[1] = 1;
}

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    sieve();
	int t;
	cin >> t;
	while (t--) {
		int l, r;
		cin >> l >> r;
		int ans = 0;
		for (int i = l ; i <= r; i++) ans += (prime[i] == 0);
		cout << ans << endl;
	}
}


