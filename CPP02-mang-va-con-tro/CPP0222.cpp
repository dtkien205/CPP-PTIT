#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    int mark[1000005] = { 0 }, cnt = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int x;
            cin >> x;
            if (mark[x] == i - 1)
                mark[x] = i;
        }
    }

    for (int i = 0; i <= 1000000; i++) {
        if (mark[i] == n)
            cnt++;
    }
    cout << cnt << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}