#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(int a, int b)
{
    while (b) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a + b;
}

ll lcm(int a, int b)
{
    return 1ll * a / gcd(a, b) * b;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        cout << lcm(a, b) << ' ' << gcd(a, b) << endl;
    }
}