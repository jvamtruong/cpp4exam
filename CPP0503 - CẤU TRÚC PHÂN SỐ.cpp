#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

struct PhanSo {
    long long up, down;
};

long long gcd(long long a, long long b) {
    return b ? gcd(b, a % b) : a;
}

void nhap(PhanSo &a) {
    cin >> a.up >> a.down;
}

void rutgon(PhanSo &a) {
    long long k = gcd(a.up, a.down);
    a.up /= k;
    a.down /= k;
}

void in(PhanSo a) {
    cout << a.up << "/" << a.down;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}