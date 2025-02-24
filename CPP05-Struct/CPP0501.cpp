#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct Point {
    double x, y;
};

void input(Point &a)
{
    cin >> a.x >> a.y;
}

double distance(Point a, Point b)
{
    return sqrt(abs(b.x - a.x) * abs(b.x - a.x) + abs(b.y - a.y) * abs(b.y - a.y));
}

int main()
{
    Point A, B;
    int t;
    cin >> t;
    while (t--) {
        input(A);
        input(B);
        cout << fixed << setprecision(4) << distance(A, B) << endl;
    }
    return 0;
}