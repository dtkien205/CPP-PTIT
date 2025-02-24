#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n + 1];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int d = 0;
        sort(a, a + n);
        for (int i = 0; i < n; i++) {
            if (a[i] > k / 2)
                break;
            int l = lower_bound(a + i + 1, a + n, k - a[i]) - a;
            if (l != n) {
                int u = upper_bound(a + i + 1, a + n, k - a[i]) - a;
                d += u - l;
            }
        }
        cout << d << endl;
    }
}
