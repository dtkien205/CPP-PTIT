#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        int d = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] <= k)
                d++;
        }

        int cnt = 0;
        for (int i = 0; i < d; i++) {
            if (a[i] > k)
                cnt++;
        }

        int ans = cnt;
        for (int i = 0, j = d; j < n; i++, j++) {
            if (a[i] > k)
                cnt--;
            if (a[j] > k)
                cnt++;
            ans = fmin(ans, cnt);
        }
        cout << ans << endl;
    }
}