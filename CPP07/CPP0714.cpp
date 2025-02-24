#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, a[10000];
bool ok = false;

void ktao()
{
    for (int i = 1; i <= n; i++)
        a[i] = i;
}

void in()
{
    for (int i = 1; i <= n; i++)
        cout << a[i] << ' ';
}

void xuLy()
{
    int i = n;
    while (a[i] > a[i + 1] && i >= 1) {
        i--;
    }
    if (i == 0)
        ok = true;
    else {
        int j = n;
        while (a[j] < a[i])
            j--;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}

void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int i = n - 1;
    while (a[i] < a[i + 1] && i >= 1)
        i--;
    int j = n;
    while (a[j] > a[i])
        j--;
    swap(a[i], a[j]);
    // reverse(a + i + 1, a + n + 1);
    in();
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
