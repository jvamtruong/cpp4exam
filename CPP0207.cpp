#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
    	int n, d;
    	cin >> n >> d;
    	int a[n + 3];
    	for (int i = 1 ; i <= n; i++) cin >> a[i];
    	for (int i = d + 1 ; i <= n; i++) cout << a[i] << " ";
    	for (int i = 1 ; i <= d; i++) cout << a[i] << " ";
    	cout << endl;
	}
}


