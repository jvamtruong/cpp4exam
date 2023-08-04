#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

bool cmp(pair < string, string > a, pair < string, string > b) {
    stringstream ss;
    ss << a.second;
    string tok = "";
    vector < string > v1, v2;
    while (getline(ss, tok, '/')) v1.push_back(tok);
    ss.clear();
    ss << b.second;
    tok = "";
    while (getline(ss, tok, '/')) v2.push_back(tok);
    if (v1.back() < v2.back()) return true;
    else {
        if (v1.back() == v2.back()) {
            if (v1[1] < v2[1]) return true;
            else if (v1[1] == v2[1]) return v1.front() < v2.front();
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector < pair < string, string > > v(n);
    for (auto& i : v) cin >> i.first >> i.second;
    sort(v.begin(), v.end(), cmp);
    cout << v.back().first << endl << v.front().first;
}