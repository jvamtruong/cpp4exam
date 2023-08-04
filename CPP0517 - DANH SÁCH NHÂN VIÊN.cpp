#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

struct NhanVien {
    string ten, gioitinh, ns, diachi, ms, hd;
};

void nhap(NhanVien &a) {
    cin.ignore();
    getline(cin, a.ten);
    cin >> a.gioitinh >> a.ns;
    cin.ignore();
    getline(cin, a.diachi);
    cin >> a.ms >> a.hd;
}

string convert(int id) {
    string res = to_string(id);
    while (res.length() < 5) res = "0" + res;
    return res;
}

void inds(NhanVien a[], int n) {
    for (int i = 0 ; i < n; i++) {
        cout << convert(i + 1) << " " << a[i].ten << " " << a[i].gioitinh << " " << a[i].ns << " " << a[i].diachi << " " << a[i].ms << " " << a[i].hd << endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}