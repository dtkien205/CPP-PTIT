#include <bits/stdc++.h>
using namespace std;
#define ll long long

int BinarySearch(int a[], int n, int x)
{
    int l = 0, r = n - 1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (a[m] == x)
            return 1;
        else if (a[m] > x)
            r = m - 1;
        else
            l = m + 1;
    }
    return -1;
}

void solve()
{
    int n, x;
    cin >> n >> x;
    int a[n + 1];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << BinarySearch(a, n, x) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
