#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int solve(int a, int m) {
	for (int i = 1 ; i < m; i++) if (a * i % m == 1) return i;
	return -1;
}

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
    	int a, m;
    	cin >> a >> m;
    	cout << solve(a, m) << endl;
	}
	   
}
