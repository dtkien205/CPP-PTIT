#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<ll> v;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        if (x > 0) {
            v.push_back(x);
        }
    }
    for (auto x : v)
        cout << x << ' ';
    for (int i = 0; i < n - v.size(); i++) {
        cout << "0 ";
    }
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
