#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<bool> d(n + 1, 0);
    for (int i = 0; i < n - 1; i++) {
        int x;
        cin >> x;
        if (x <= n) {
            d[x] = 1;
        }
    }
    for (int i = 1; i <= n; i++) {
        if (!d[i]) {
            cout << i << endl;
            return;
        }
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
