#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, x;
    cin >> n >> x;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        mp[num]++;
    }
    if (!mp[x])
        cout << "-1" << endl;
    else
        cout << mp[x] << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
