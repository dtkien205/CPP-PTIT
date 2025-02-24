#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, a[20];
bool ok = false;

void ktao()
{
    for (int i = 1; i <= n; i++)
        a[i] = 0;
}

void in()
{
    for (int i = 1; i <= n; i++)
        cout << a[i];
    cout << ' ';
}

void xuLy()
{
    int i = n;
    while (a[i] == 1 && i >= 1) {
        i--;
    }
    if (i == 0)
        ok = true;
    else {
        a[i] = 1;
        for (int j = i + 1; j <= n; j++)
            a[j] = 0;
    }
}

void solve()
{
    cin >> n;
    ktao();
    while (!ok) {
        in();
        xuLy();
    }
    cout << endl;
    ok = false;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
