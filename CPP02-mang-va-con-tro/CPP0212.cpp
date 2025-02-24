#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int mod = 1e9 + 7;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int a[n + 1];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        ll ans = a[0], p = 1;
        for (int i = 1; i < n; i++) {
            ans = ans * x + a[i];
            ans %= mod;
        }
        cout << ans << endl;
    }
}
