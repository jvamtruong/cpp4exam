#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

struct NhanVien {
    string ten, gioitinh, ns, diachi, ms, hd;
};

void nhap(NhanVien &a) {
    getline(cin, a.ten);
    cin >> a.gioitinh >> a.ns;
    cin.ignore();
    getline(cin, a.diachi);
    cin >> a.ms >> a.hd;
}

void in(NhanVien a) {
    cout << "00001" << " " << a.ten << " " << a.gioitinh << " " << a.ns << " " << a.diachi << " " << a.ms << " " << a.hd;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}