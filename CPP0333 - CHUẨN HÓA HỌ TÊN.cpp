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
    vector < string > v;
    while (ss >> token) v.push_back(token);
    for (int i = 0 ; i < v.size(); i++) {
        if (i == v.size() - 1) for (auto& ch : v[i]) ch = toupper(ch);
        else {
            for (auto& ch : v[i]) ch = tolower(ch);
            v[i].front() = toupper(v[i].front());
        }
    }
    for (int i = 0 ; i < v.size() - 1; i++) {
        if (i == v.size() - 2) cout << v[i] << ", ";
        else cout << v[i] << " ";
    }
    cout << v.back();
}