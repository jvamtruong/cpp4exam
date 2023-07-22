#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

bool cmp(pair < int, int > a, pair < int, int > b) {
    if (a.second > b.second) return true;
    if (a.second == b.second) return a.first <= b.first;
    return false;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map < int, int > cnt;
        while (n--) {
            int x;
            cin >> x;
            cnt[x]++;
        }
        vector < pair < int, int > > v;
        for (auto i : cnt) v.push_back(i);
        sort(v.begin(), v.end(), cmp);
        for (auto i : v) {
            for (int j = 0 ; j < i.second; j++) cout << i.first << " ";
        }
        cout << endl;
    }
}