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
    	int ans = -1;
    	while (n--) {
    		int x;
    		cin >> x;
    		ans = max(ans, x);
		}
		cout << ans << endl;
	}
}


