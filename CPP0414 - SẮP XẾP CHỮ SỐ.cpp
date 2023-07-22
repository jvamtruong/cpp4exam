#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

set < int > s;

void get_digits(long long n) {
    while (n) {
        s.insert(n % 10);
        n /= 10;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        s.clear();
        while (n--) {
            long long x;
            cin >> x;
            get_digits(x);
        }
        for (int i : s) cout << i << " ";
        cout << endl;
    }
}