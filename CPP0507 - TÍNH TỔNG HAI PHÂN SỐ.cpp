#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

struct PhanSo {
    long long up, down;
};

long long gcd(long long a, long long b) {
    return b ? gcd(b, a % b) : a;
}

long long lcm(long long a, long long b) {
    return a * (b / gcd(a, b));
}

void nhap(PhanSo &a) {
    cin >> a.up >> a.down;
}

void in(PhanSo a) {
    cout << a.up << "/" << a.down;
}

PhanSo tong(PhanSo a, PhanSo b) {
    PhanSo res;
    res.down = lcm(a.down, b.down);
    res.up = a.up * (res.down / a.down) + b.up * (res.down / b.down);
    long long k = gcd(res.up, res.down);
    res.up /= k;
    res.down /= k;
    return res;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}