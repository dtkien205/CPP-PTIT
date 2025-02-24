#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        ll dp[n + 1] = { 0 };
        dp[1] = a[1];
        for (int i = 2; i <= n; i++) {
            dp[i] = a[i];
            dp[i] = max(dp[i - 1], dp[i - 2] + a[i]);
        }

        cout << dp[n] << endl;
    }
}