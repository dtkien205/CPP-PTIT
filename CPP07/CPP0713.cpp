#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, k, a[20];
bool ok = false;

void ktao()
{
    for (int i = 1; i <= n; i++)
        a[i] = i;
}

void in()
{
    for (int i = 1; i <= n; i++)
        cout << a[i];
    cout << ' ';
}

void xuLy()
{
    int i = n - 1;
    while (i >= 1 && a[i] > a[i + 1])
        i--;
    if (i == 0)
        ok = true;
    else {
        int j = n;
        while (a[i] > a[j])
            j--;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
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
