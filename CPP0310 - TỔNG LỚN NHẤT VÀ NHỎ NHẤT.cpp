    #include<bits/stdc++.h>
#define endl '\n'
using namespace std;

long long min_sum(string a, string b) {
    for (char& ch : a) if (ch == '6') ch = '5';
    for (char& ch : b) if (ch == '6') ch = '5';
    return stoll(a) + stoll(b);
}

long long max_sum(string a, string b) {
    for (char& ch : a) if (ch == '5') ch = '6';
    for (char& ch : b) if (ch == '5') ch = '6';
    return stoll(a) + stoll(b);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        cout << min_sum(a, b) << " " <<  max_sum(a, b) << endl;
    }   
}