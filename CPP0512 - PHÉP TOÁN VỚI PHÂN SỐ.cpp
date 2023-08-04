#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

struct PhanSo {
    long long tu, mau;
    PhanSo() {}
    PhanSo(long long tu, long long mau) {
        this -> tu = tu;
        this -> mau = mau;
    }
};

long long gcd(long long a, long long b) {
    return b ? gcd(b, a % b) : a;
}

long long lcm(long long a, long long b) {
    return a * (b / gcd(a, b));
}

long long sqr(long long a) {
    return a * a;
}

PhanSo rutgon(PhanSo a) {
    long long k = gcd(a.tu, a.mau);
    return PhanSo(a.tu / k, a.mau / k);
}

PhanSo tong(PhanSo a, PhanSo b) {
    return rutgon(PhanSo(sqr(a.tu * b.mau + b.tu * a.mau), sqr(a.mau * b.mau)));
}

PhanSo tich(PhanSo a, PhanSo b) {
    auto c = tong(a, b);
    return rutgon(PhanSo(a.tu * b.tu * c.tu, a.mau * b.mau * c.mau));
}

void process(PhanSo a, PhanSo b) {
    auto c = tong(a, b);
    auto d = tich(a, b);
    cout << c.tu << "/" << c.mau << " " << d.tu << "/" << d.mau << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}