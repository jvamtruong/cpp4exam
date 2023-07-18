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
		long long k;
		cin >> n >> k;
		int ans = 0;
		for (int i = 1 ; i <= n; i++) ans += i % k;
		cout << (ans == k) << endl;
	}
}
