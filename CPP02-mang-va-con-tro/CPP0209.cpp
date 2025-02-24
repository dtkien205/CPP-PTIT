#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, q;
    cin >> n >> q;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    while (q--) {
        int l, r;
        cin >> l >> r;
        ll sum = 0;
        for (int i = l; i <= r; i++) {
            sum += a[i];
        }
        cout << sum << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
