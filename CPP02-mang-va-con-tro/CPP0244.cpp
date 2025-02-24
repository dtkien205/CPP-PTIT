#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    int cnt[10000] = {};
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        cnt[x] = 1;
    }
    for (int i = 0; i < 1005; i++){
        if(cnt[i]) cout << i << ' ';
    }
}

int main()
{
    solve();
}
