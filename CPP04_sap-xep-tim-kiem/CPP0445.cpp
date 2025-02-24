#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }
    if (s.size() == 1)
        cout << "-1" << endl;
    else {
        int cnt = 0;
        for (auto x : s) {
            cout << x << ' ';
            cnt++;
            if (cnt == 2) {
                cout << endl;
                return;
            }
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
