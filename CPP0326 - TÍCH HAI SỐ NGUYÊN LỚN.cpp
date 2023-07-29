#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

vector < int > mul(string a, string b) {
    if (a == "0" || b == "0") return {0};
    vector < int > v(a.length() + b.length());
    for (int i = a.length() - 1 ; i >= 0; i--) {
        for (int j = b.length() - 1 ; j >= 0; j--) {
            int val = (a[i] - '0') * (b[j] - '0') + v[i + j + 1];
            v[i + j + 1] = val % 10;
            v[i + j] += val / 10;  
        }
    }
    while (v.front() == 0) v.erase(v.begin());
    return v;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        for (auto i : mul(a, b)) cout << i;
        cout << endl;
    }
}