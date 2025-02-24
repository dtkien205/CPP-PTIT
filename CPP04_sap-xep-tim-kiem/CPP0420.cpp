#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, x;

int cmp(int a, int b)
{
    return abs(a - x) < abs(b - x);
}

void solve()
{
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    stable_sort(a.begin(), a.end(), cmp);
    for (auto x : a)
        cout << x << ' ';
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