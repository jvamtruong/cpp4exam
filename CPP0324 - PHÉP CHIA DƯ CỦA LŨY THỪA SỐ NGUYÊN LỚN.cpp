#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

long long mul_mod(long long a, long long b, long long MOD) {
    long long res = 0;
    while (b) {
        if (b & 1) res = (res + a) % MOD;
        a = (a << 1) % MOD;
        b >>= 1;
    }
    return res;
}

long long power(long long a, long long n, long long MOD) {
    long long res = 1;
    while (n) {
        if (n & 1) res = mul_mod(res, a, MOD);
        a = mul_mod(a, a, MOD);
        n >>= 1;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string s;
        long long b, m;
        cin >> s >> b >> m;
        long long a = 0;
        for (auto ch : s) a = (a * 10 + (ch - '0')) % m;
        cout << power(a, b, m) << endl;
    }
}