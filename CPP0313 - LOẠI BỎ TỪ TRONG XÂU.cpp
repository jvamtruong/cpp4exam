#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s, word;
    getline(cin, s);
    getline(cin, word);
    stringstream ss(s);
    string token = "";
    string ans = "";
    while (ss >> token) {
        if (token != word) {
            ans += token;
            ans += " ";
        }
    }
    cout << ans;
}