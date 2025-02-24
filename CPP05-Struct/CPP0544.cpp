#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.141592653589793238

struct Point {
    double x, y;
    void nhap()
    {
        cin >> x >> y;
    }
};

int check(Point a, Point b, Point c)
{
    if ((a.x - b.x) * (a.y - c.y) == (a.y - b.y) * (a.x - c.x))
        return 0;
    return 1;
}

double distance(Point a, Point b)
{
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

void solve()
{
    Point A, B, C;
    A.nhap();
    B.nhap();
    C.nhap();

    if (!check(A, B, C)) {
        cout << "INVALID" << endl;
        return;
    }

    double a = distance(A, B);
    double b = distance(A, C);
    double c = distance(C, B);
    double p = (a + b + c) / 2;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    double r = a * b * c / (4 * s);
    double res = PI * r * r;
    cout << setprecision(3) << fixed << res << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
