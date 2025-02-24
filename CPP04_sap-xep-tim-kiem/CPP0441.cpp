#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, x;
    cin >> n >> x;
    int a[n + 1];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int ok = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            cout << i + 1 << endl;
            ok = 0;
            return;
        }
    }
    if (ok)
        cout << "-1" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
