#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    map<int, int> mp;
    for (auto& x : a) {
        cin >> x;
        mp[x]++;
    }
    sort(a, a + n);
    for (auto& x : b)
        cin >> x;
    for (auto x : b) {
        if (mp[x]) {
            for (int k = 1; k <= mp[x]; k++) {
                cout << x << ' ';
            }
            mp[x] = 0;
        }
    }
    for (auto x : a) {
        if (mp[x])
            cout << x << ' ';
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