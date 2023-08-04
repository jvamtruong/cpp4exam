#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

struct thoigian {
    int hh, mm, ss;
};

bool cmp(thoigian a, thoigian b) {
    if (a.hh < b.hh) return true;
    else {
        if (a.hh == b.hh) {
            if (a.mm < b.mm) return true;
            else if (a.mm == b.mm) return a.ss < b.ss;
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector < thoigian > v(n);
    for (auto& i : v) cin >> i.hh >> i.mm >> i.ss;
    sort(v.begin(), v.end(), cmp);
    for (auto i : v) cout << i.hh << " " << i.mm << " " << i.ss << endl;
}