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
        int a[n * n + 1];
        for (int i = 1; i <= n * n; i++)
            cin >> a[i];
        sort(a, a+n*n);
        // for (int i = 1; i <= n * n; i++)
        //     cout << i << ' ' << a[i] << endl;
        cout << a[k] << endl;
    }
}
