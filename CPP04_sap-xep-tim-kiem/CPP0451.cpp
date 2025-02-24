#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int k, x;
    cin >> k >> x;
    int pos = lower_bound(v.begin(), v.end(), x) - v.begin();
    for (int i = pos - k / 2; i < pos; i++)
        cout << v[i] << ' ';
    for (int i = pos + 1; i <= pos + k / 2; i++)
        cout << v[i] << ' ';
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
