#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int b[n], d = 0;
    for (int i = 0; i < n; i += 2) {
        b[i] = a[d++];
    }
    for (int i = 1; i < n; i += 2) {
        b[i] = a[d++];
    }
    for (auto x : b)
        cout << x << ' ';
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
