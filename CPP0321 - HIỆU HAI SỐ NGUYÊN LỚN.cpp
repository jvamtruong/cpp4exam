#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

vector < int > sub(string a, string b) {
    vector < int > v;
    int len = max(a.length(), b.length());
    while (len - a.length()) a = '0' + a;
    while (len - b.length()) b = '0' + b;
    if (a < b) swap(a, b);
    int carry = 0;
    for (int i = a.length() - 1 ; i >= 0; i--) {
        int sum = (a[i] - '0') - (b[i] - '0') - carry;
        if (sum < 0) {
            carry = 1;
            sum += 10;
        }
        else carry = 0;
        v.push_back(sum);
    }
    //while (v.back() == 0) v.pop_back();
    reverse(v.begin(), v.end());
    return v;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        for (auto i : sub(a, b)) cout << i;
        cout << endl;
    }
}