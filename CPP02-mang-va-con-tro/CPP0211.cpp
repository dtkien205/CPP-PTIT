#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    int a[n], res = 0;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j >= i; j--) {
            if (j - i <= res) {
                break;
            }
            if (a[i] < a[j]) {
                res = max(res, j - i);
            }
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