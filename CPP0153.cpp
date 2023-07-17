#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
    	long long n, k;
    	cin >> n >> k;
    	long long ans = 0;
    	for (int i = 1 ; i <= n; i++) ans += i % k;
    	cout << ans << endl;
	}
}
