#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int type;
        cin >> type;
        cin.ignore();
        string s;
        getline(cin, s);
        stringstream ss;
        ss << s;
        string tok = "";
        vector < string > v;
        while (ss >> tok) {
            for (char& ch : tok) ch = tolower(ch);
            tok[0] = toupper(tok[0]);
            v.push_back(tok);
        }
        if (type == 1) {
            cout << v.back() << " ";
            v.pop_back();
            for (auto i : v) cout << i << " ";
        }
        else {
            for (int i = 1 ; i < v.size(); i++) cout << v[i] << " ";
            cout << v[0];
        }
        cout << endl;
    }
}