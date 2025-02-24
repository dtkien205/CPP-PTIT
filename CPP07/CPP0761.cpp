#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

ll chiaDu(string s, ll m)
{
    ll mod = 0;
    for (int i = 0; i < s.size(); i++)
        mod = (mod * 10 + (s[i] - '0')) % m;
    return mod;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll a;
        string b;
        cin >> a >> b;
        cout << __gcd(chiaDu(b, a), a) << endl;
    }
}