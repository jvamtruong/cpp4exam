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
		int a[n + 3];
		for (int i = 1 ; i <= n; i++) cin >> a[i];
		int l = 1;
		int r = n;
		int ans = 0;
		while (l <= r) {
			if (a[l] == a[r]) {
				l++;
				r--;
				continue;
			}
			if (a[l] < a[r]) {
				a[l + 1] += a[l];
				l++;
				ans++;
				continue;
			}
			if (a[l] > a[r]) {
				a[r - 1] += a[r];
				r--;
				ans++;
			}
		}
		cout << ans << endl;
	}
}
