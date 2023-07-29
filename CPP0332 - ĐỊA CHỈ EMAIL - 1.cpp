#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    getline(cin, s);
    stringstream ss(s);
    string token = "";
    string ans = "";
    vector < string > v;
    while (ss >> token) v.push_back(token);
    for (auto ch : v.back()) cout << (char) tolower(ch);
    v.pop_back();
    for (auto tok : v) cout << (char) tolower(tok[0]);
    cout << "@ptit.edu.vn";
}