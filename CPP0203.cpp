#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

const int MAX = 1E6;

int cnt[MAX + 3];

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
    	int n;
    	cin >> n;
    	memset(cnt, 0, sizeof cnt);
    	while (n--) {
    		int x;
    		cin >> x;
    		if (x > 0) cnt[x] = 1;
		}
		for (int i = 1 ; i <= MAX; i++) {
			if (cnt[i] == 0) {
				cout << i << endl;
				break;
			}
		}
	}
}


