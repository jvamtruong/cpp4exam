#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int sum_digits(int n) {
    int res = 0;
    while (n) {
        res += n % 10;
        n /= 10;
    }
    return res;
}

bool check(string s) {
    int res = 0;
    for (auto ch : s) res += (ch - '0');
    while (res >= 10) res = sum_digits(res);
    return res == 9;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << check(s) << endl;   
    }
}