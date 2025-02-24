#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int k, n;
    cin >> k >> n;
    vector<ll> v;
    for (int i = 0; i < n + k; i++) {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for (auto x : v)
        cout << x << ' ';
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
