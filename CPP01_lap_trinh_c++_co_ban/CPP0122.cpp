#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b)
{
    while (b) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a + b;
}

ll lcm(ll a, ll b)
{
    return 1ll * a / gcd(a, b) * b;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        ll ans, res = 1;
        for (int i = 1; i <= n; i++){
            res = lcm(res, i);
        }
        cout << res << endl;
    }
}