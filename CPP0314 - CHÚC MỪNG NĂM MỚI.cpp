#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    set < string > bst;
    while (t--) {
        string s;
        getline(cin, s);
        bst.insert(s);
    }
    cout << bst.size();
}