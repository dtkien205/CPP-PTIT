#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, k, a[100];
bool ok = false;

void ktao()
{
    for (int i = 1; i <= k; i++)
        a[i] = i;
}

void in()
{
    for (int i = 1; i <= k; i++)
        cout << a[i];
    cout << ' ';
}

void xuLy()
{
    int i = k;
    while (i >= 1 && a[i] == n - k + i)
        i--;
    if (i == 0)
        ok = true;
    else {
        a[i]++;
        for (int j = i + 1; j <= k; j++)
            a[j] = a[j - 1] + 1;
    }
}

void solve()
{
    cin >> n >> k;
    ktao();
    while (!ok) {
        in();
        xuLy();
    }
    ok = false;
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
