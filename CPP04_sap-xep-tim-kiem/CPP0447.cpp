#include <bits/stdc++.h>
using namespace std;
#define ll long long

int cmp(int a, int b)
{
    return a > b;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n + 1];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n, cmp);
    for (int i = 0; i < k; i++)
        cout << a[i] << ' ';
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
