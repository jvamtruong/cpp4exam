#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		map < int, int > cnt;
		while (n--) {
			int x;
			cin >> x;
			cnt[x]++;
		}
		while (m--) {
			int x;
			cin >> x;
			for (int i = 0 ; i < cnt[x]; i++) cout << x << " ";
			cnt.erase(x);
		}
		for (auto i : cnt) {
			for (int j = 0 ; j < i.second; j++) cout << i.first << " ";
		}
		cout << endl;
	}
}
