#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

const int MAX = 1E4;

int a[MAX + 3];

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n = 0;
    map < int, int > cnt;
    while (cin >> a[n]) {
    	cnt[a[n]]++;
    	n++;
	}
	for (int i = 0 ; i < n; i++) {
		if (cnt[a[i]]) {
			cout << a[i] << " " << cnt[a[i]] << endl;
			cnt[a[i]] = 0;
		}
	}
}
