#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        double a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << setprecision(4) << fixed << 1.0 * sqrt(abs(c - a) * abs(c - a) + abs(d - b) * abs(d - b)) << endl;
    }
}