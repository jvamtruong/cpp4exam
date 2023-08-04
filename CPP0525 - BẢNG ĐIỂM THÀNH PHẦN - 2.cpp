#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

struct sinhvien {
    string id, ten, lop;
    float d1, d2, d3;
};

bool cmp(sinhvien a, sinhvien b) {
    return a.ten < b.ten;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector < sinhvien > v(n);
    for (auto& i : v) {
        cin.ignore();
        getline(cin, i.id);
        getline(cin, i.ten);
        cin >> i.lop >> i.d1 >> i.d2 >> i.d3;
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0 ; i < v.size(); i++) {
        cout << fixed << setprecision(1) << i + 1 << " " << v[i].id << " " << v[i].ten << " " << v[i].lop << " " << v[i].d1 << " " << v[i].d2 << " " << v[i].d3 << endl;
    }
}