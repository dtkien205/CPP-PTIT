#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n + 1];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);
    cout << a[k - 1] << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
