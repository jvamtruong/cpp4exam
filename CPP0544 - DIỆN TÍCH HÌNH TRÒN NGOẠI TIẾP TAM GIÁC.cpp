#include<bits/stdc++.h>
#define endl '\n'
#define PI 3.141592653589793238
using namespace std;

struct point {
    double x, y;
};

void input(point &a) {
    cin >> a.x >> a.y;
}

double sqr(double x) {
    return x * x;
}

double diff(point a, point b) {
    return sqrt(sqr(a.x - b.x) + sqr(a.y - b.y));
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        point m, n, p;
        input(m); input(n); input(p);
        double a, b, c;
        a = diff(m, n);
        b = diff(m, p);
        c = diff(n, p);
        if (a + b > c && a + c > b && b + c > a) {
            double s_square = (a + b + c) * (a + b - c) * (b + c - a) * (c + a - b);
            double r_square = sqr(a * b * c) / s_square;
            cout << fixed << setprecision(3) << PI * r_square << endl;
        }
        else cout << "INVALID" << endl;
    }
}