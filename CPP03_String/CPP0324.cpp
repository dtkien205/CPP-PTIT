#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll MOD(ll a, ll b, ll m)
{
    if (b == 0)
        return 1;
    ll tmp = MOD(a, b / 2, m);
    if (b % 2 == 0)
        return ((tmp % m) * (tmp % m)) % m;
    else
        return (((tmp % m) * (tmp % m)) % m * (a % m)) % m;
}

ll chiaDu(string s, ll m)
{
    ll mod = 0;
    for (int i = 0; i < s.size(); i++) {
        mod = ((mod * 10) + (s[i] - '0')) % m;
    }
    return mod;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll b, m;
        string a;
        cin >> a >> b >> m;
        ll n = chiaDu(a, m);
        cout << MOD(n, b, m) << endl;
    }
}