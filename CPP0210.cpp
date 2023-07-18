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
    	for (int i = 0 ; i < n; i++) cin >> a[i];
    	int ans = -1;
    	for (int i = 0 ; i < n - 1; i++) {
    		for (int j = i + 1 ; j < n; j++) {
    			if (a[i] < a[j]) {
    				ans = max(ans, a[j] - a[i]);
				}
			}
		}
		cout << ans << endl;
	}
    
}

