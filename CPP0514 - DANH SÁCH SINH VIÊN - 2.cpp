#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

struct SinhVien {
    string ten, lop, ns;
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
        str[0] = toupper(str[0]);
    }
    return v[0] + " " + v[1] + " " + v.back();
}

void nhap(SinhVien a[], int n) {
    for (int i = 1 ; i <= n; i++) {
        cin.ignore();
        getline(cin, a[i].ten);
        cin >> a[i].lop >> a[i].ns >> a[i].gpa;
    }
}

void in(SinhVien a[], int n) {
    for (int i = 1 ; i <= n; i++) {
        a[i].ten = chuanhoa_ten(a[i].ten);
        a[i].ns = chuanhoa_ns(a[i].ns);
        cout << fixed << setprecision(2) << "B20DCCN" << convert(i) << " " << a[i].ten << " " << a[i].lop << " " << a[i].ns << " " << a[i].gpa << endl;
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}