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

    int ans = -1;
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            ans = max(ans, a[j] - a[i]);
        }
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
