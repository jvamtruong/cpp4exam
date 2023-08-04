#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

struct SinhVien {
    string ten, lop, ns;
    float gpa;
};

string chuanhoa(string a) {
    stringstream ss;
    ss << a;
    string tok = "";
    vector < string > v;
    while (getline(ss, tok, '/')) v.push_back(tok);
    for (auto& i : v) if (i.length() < 2) i = "0" + i;
    return v[0] + '/' + v[1] + '/' + v.back();
}

void nhapThongTinSV(SinhVien &a) {
    getline(cin, a.ten);
    cin >> a.lop >> a.ns >> a.gpa;
}

void  inThongTinSV(SinhVien a) {
    a.ns = chuanhoa(a.ns);
    cout << fixed << setprecision(2) << "N20DCCN001" << " " << a.ten << " " << a.lop << " " << a.ns << " " << a.gpa;
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}