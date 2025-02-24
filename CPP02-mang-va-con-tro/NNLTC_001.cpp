#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int x;
    vector<ll> v;
    map<ll, int> mp;
    while (cin >> x) {
        mp[x]++;
        v.push_back(x);
    }
    for (auto x : v) {
        if (mp[x]) {
            cout << x << ' ' << mp[x] << endl;
            mp[x] = 0;
        }
    }
}

int main()
{
    solve();
}