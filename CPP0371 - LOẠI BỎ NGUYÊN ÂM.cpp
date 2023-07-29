#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    for (char& ch : s) ch = tolower(ch);
    for (char ch : s) {
        if (ch != 'u' && ch != 'e' && ch != 'o' && ch != 'a' && ch != 'i' && ch != 'y') cout << "." << ch;
    }
}