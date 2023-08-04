#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

struct NhanVien {
    string id, ten, gioitinh, ns, diachi, ms, hd;
};

void nhap(NhanVien &a) {
    cin.ignore();
    getline(cin, a.ten);
    cin >> a.gioitinh >> a.ns;
    cin.ignore();
    getline(cin, a.diachi);
    cin >> a.ms >> a.hd;
}

string convert(int i) {
    string res = to_string(i);
    while (res.length() < 5) res = '0' + res;
    return res;
}

bool cmp(NhanVien a, NhanVien b) {
    stringstream ss;
    ss << a.ns;
    string tok = "";
    vector < string > v1, v2;
    while (getline(ss, tok, '/')) v1.push_back(tok);
    ss.clear();
    ss << b.ns;
    tok = "";
    while (getline(ss, tok, '/')) v2.push_back(tok);
    if (v1.back() < v2.back()) return true;
    else {
        if (v1.back() == v2.back()) {
            if (v1[0] < v2[0]) return true;
            else if (v1[0] == v2[0]) return v1[1] < v2[1];
        }
    }
    return false;
}

void sapxep(NhanVien a[], int n) {
    for (int i = 0 ; i < n; i++) {
        a[i].id = convert(i + 1);
    }
    sort(a, a + n, cmp);
}

void inds(NhanVien a[], int n) {
    for (int i = 0 ; i < n; i++) {
        cout << a[i].id << " " << a[i].ten << " " << a[i].gioitinh << " " << a[i].ns << " " << a[i].diachi << " " << a[i].ms << " " << a[i].hd << endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}