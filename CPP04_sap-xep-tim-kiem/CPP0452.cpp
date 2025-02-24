#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    map<ll, ll> mp;
    vector<ll> res;
    for (int i = 0; i < n1; i++) {
        ll x;
        cin >> x;
        mp[x] = 1;
    }
    for (int i = 0; i < n2; i++) {
        ll x;
        cin >> x;
        if (mp[x] == 1)
            mp[x] = 2;
    }

    int ok = 1;
    for (int i = 0; i < n3; i++) {
        ll x;
        cin >> x;
        if (mp[x] == 2) {
            ok = 0;
            cout << x << ' ';
        }
    }
    if (ok)
        cout << "-1";
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
