#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

bool cmp(string a, string b) {
    return a + b > b + a;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < string > v;
        while (n--) {
            string x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end(), cmp);
        for (auto i : v) cout << i;
        cout << endl;
    }
}