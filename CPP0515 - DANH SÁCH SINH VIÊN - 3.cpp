#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

struct SinhVien {
    string id, ten, lop, ns;
    float gpa;
};

string convert(int i) {
    string res = to_string(i);
    while (res.length() < 3) res = '0' + res;
    return res;
}

string chuanhoa_ns(string a) {
    stringstream ss;
    ss << a;
    string tok = "";
    vector < string > v;
    while (getline(ss, tok, '/')) v.push_back(tok);
    for (auto& i : v) if (i.length() < 2) i = '0' + i;
    return v[0] + '/' + v[1] + '/' + v.back();
}

string chuanhoa_ten(string a) {
    stringstream ss;
    ss << a;
    string tok = "";
    vector < string > v;
    while (ss >> tok) v.push_back(tok);
    for (auto& str : v) {
        for (auto& ch : str) ch = tolower(ch);
        str.front() = toupper(str.front());
    }
    return v[0] + ' ' + v[1] + ' ' + v.back();
}

void nhap(SinhVien a[], int n) {
    for (int i = 1 ; i <= n; i++) {
        cin.ignore();
        getline(cin, a[i].ten);
        cin >> a[i].lop >> a[i].ns >> a[i].gpa;
        a[i].id = "B20DCCN" + convert(i);
    }
}

bool cmp(SinhVien a, SinhVien b) {
    return a.gpa > b.gpa;
}

void sapxep(SinhVien a[], int n) {
    sort(a + 1, a + n + 1, cmp);
}

void in(SinhVien a[], int n) {
    for (int i = 1 ; i <= n; i++) {
        a[i].ns = chuanhoa_ns(a[i].ns);
        a[i].ten = chuanhoa_ten(a[i].ten);
        cout << fixed << setprecision(2) << a[i].id << " " << a[i].ten << " " << a[i].lop << " " << a[i].ns << " " << a[i].gpa << endl;
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}