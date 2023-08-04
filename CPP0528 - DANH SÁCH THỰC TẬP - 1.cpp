#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

struct sinhvien {
    int cnt;
    string id, ten, lop, email, cty;
};

bool cmp(sinhvien a, sinhvien b) {
    return a.ten < b.ten;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    map < string, vector < sinhvien > > bst;
    for (int i = 1 ; i <= n; i++) {
        sinhvien a;
        a.cnt = i;
        cin >> a.id;
        cin.ignore();
        getline(cin, a.ten);
        cin >> a.lop >> a.email >> a.cty;
        bst[a.cty].push_back(a);
    }
    int q;
    cin >> q;
    while (q--) {
        string s;
        cin >> s;
        vector < sinhvien > v = bst[s];
        sort(v.begin(), v.end(), cmp);
        for (auto i : v) cout << i.cnt << " " << i.id << " " << i.ten << " " << i.lop << " " << i.email << " " << i.cty << endl;
    }
}