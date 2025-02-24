#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

ll Mul(ll a, ll b, ll mod)
{
    if (!b)
        return 0;
    ll x = Mul(a, b / 2, mod);
    if (b % 2 == 0)
        return 2 * x % mod;
    else
        return (((2 * x) % mod + a) % mod) % mod;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll a, b, c;
        cin >> a >> b >> c;

        cout << Mul(a, b, c) << endl;
    }
}