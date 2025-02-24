#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int res = 0;
    for (int i = 0; i < n; i++) {
        ll s1 = 0, s2 = 0;
        for (int j = i; j < n; j++) {
            s1 += a[j];
            s2 += b[j];
            if(s1 == s2) res = max(res, j - i + 1);
        }
    }
    cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}