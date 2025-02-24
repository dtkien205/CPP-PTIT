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
        for (int i = 0; i < n; i++)
            cin >> a[i];
        ll dp[n + 1] = {};
        dp[0] = a[0];
        for (int i = 1; i < n; i++) {
            dp[i] = a[i];
            for (int j = 0; j < i; j++) {
                if (a[i] > a[j]) {
                    dp[i] = max(dp[i], dp[j] + a[i]);
                }
            }
        }
        cout << *max_element(dp, dp + n) << endl;
    }
}