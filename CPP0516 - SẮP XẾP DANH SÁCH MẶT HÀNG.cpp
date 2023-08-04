#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

struct mathang {
    int cnt;
    string ten, loai;
    double mua, ban, lai;
};

bool cmp(mathang a, mathang b) {
    return a.lai > b.lai;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    mathang a[n + 3];
    for (int i = 0 ; i < n; i++) {
        cin.ignore();
        getline(cin, a[i].ten);
        getline(cin, a[i].loai);
        cin >> a[i].mua >> a[i].ban;
        a[i].cnt = i + 1;
        a[i].lai = a[i].ban - a[i].mua;
    }
    sort(a, a + n, cmp);
    for (int i = 0 ; i < n; i++) {
        cout << fixed << setprecision(2) << a[i].cnt << " " << a[i].ten << " " << a[i].loai << " " << a[i].lai << endl;
    }    
}