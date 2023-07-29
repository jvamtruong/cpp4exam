#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

vector < int > add(string a, string b) {
    vector < int > res;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int len = max(a.length(), b.length());
    while (len - a.length()) a += '0';
    while (len - b.length()) b += '0';
    int carry = 0;
    for (int i = 0 ; i < a.length(); i++) {
        int sum = (a[i] - '0') + (b[i] - '0') + carry;
        carry = sum / 10;
        res.push_back(sum % 10);
    }
    if (carry) res.push_back(carry);
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        for (auto i : add(a, b)) cout << i;
        cout << endl;
    }
}