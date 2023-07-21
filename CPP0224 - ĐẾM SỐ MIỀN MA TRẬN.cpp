#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

const int MAX = 100;

int n, m;
int dx[10] = {-1, -1, -1, 0, 1, 1, 1, 0};
int dy[10] = {-1, 0, 1, 1, 1, 0, -1, -1};
bool a[MAX + 3][MAX + 3];

void dfs(int i, int j) {
    a[i][j] = 0;
    for (int k = 0 ; k < 8; k++) {
        int x = i +  dx[k];
        int y = j + dy[k];
        if (0 <= x && x < n && 0 <= y && y < m && a[x][y]) dfs(x, y);
    }    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        for (int i = 0 ; i < n; i++) {
            for (int j = 0 ; j < m; j++) {
                cin >> a[i][j];
            }
        }
        int ans = 0;
        for (int i = 0 ; i < n; i++) {
            for (int j = 0 ; j < m; j++) {
                if (a[i][j]) {
                    ans++;
                    dfs(i, j);
                } 
            }
        }
        cout << ans << endl;
    }
}