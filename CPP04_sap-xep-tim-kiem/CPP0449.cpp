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
    sort(a, a + n);
    int ok = -1;
    for (int i = 0; i < n; i++) {
        if (binary_search(a, a + n, x + a[i]) == true)
            ok = 1;
    }

    cout << ok << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
