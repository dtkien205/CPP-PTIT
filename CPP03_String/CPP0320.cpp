#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    string s;
    cin >> s;
    int d[10] = {};
    if (s[0] == '0') {
        cout << "INVALID\n";
        return;
    }
    for (auto x : s) {
        if (x >= '0' && x <= '9')
            d[x - '0']++;
        else {
            cout << "INVALID\n";
            return;
        }
    }
    for (auto x : d) {
        if (x == 0) {
            cout << "NO\n";
            return;
        } else {
            cout << "YES\n";
            return;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
