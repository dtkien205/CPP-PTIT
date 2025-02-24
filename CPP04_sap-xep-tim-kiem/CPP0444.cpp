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
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            cout << i + 1 << endl;
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
