#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll sum = n * (n + 1) / 2;
    ll x = (m + sum) / 2, y = (sum - m) / 2;
    // cout << x << ' ' << y << ' ' << sum << endl;
    if (__gcd(x, y) == 1 && (m + sum) % 2 == 0)
        cout << "Yes\n";
    else
        cout << "No\n";
    // cout << m + sum << ' ' << __gcd(x, y) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}