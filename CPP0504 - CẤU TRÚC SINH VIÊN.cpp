#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

struct SinhVien {
    string ten, lop, ns;
    float gpa;
};

void nhap(SinhVien &a) {
    getline(cin, a.ten);
    cin >> a.lop >> a.ns >> a.gpa;
}

void in(SinhVien a) {
    stringstream ss;
    ss << a.ns;
    string tok = "";
    vector < string > v;
    while (getline(ss, tok, '/')) {
        v.push_back(tok);
    }
    if (v[0].length() < 2) v[0] = "0" + v[0];
    if (v[1].length() < 2) v[1] = "0" + v[1];
    a.ns = "";
    a.ns += v[0];
    a.ns += '/';
    a.ns += v[1];
    a.ns += '/';
    a.ns += v.back();
    cout << fixed << setprecision(2) << "B20DCCN001" << " " << a.ten << " " << a.lop << " " << a.ns << " " << a.gpa;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}