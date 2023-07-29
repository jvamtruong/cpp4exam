#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        map < string, int > cnt1, cnt2;
        stringstream ss(s);
        string tok = "";
        while (ss >> tok) cnt1[tok]++;
        getline(cin, s);
        ss.clear();
        ss.str(s);
        while (ss >> tok) cnt2[tok]++;
        for (auto i : cnt1) if (cnt2[i.first] == 0) cout << i.first << " ";
        cout << endl;
    }
}