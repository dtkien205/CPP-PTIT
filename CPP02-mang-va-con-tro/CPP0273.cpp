#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    ll a[n + 1];
    a[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    int ok = 0;
    for (int i = 1; i <= n; i++){
        ll l = a[i - 1], r = a[n] - a[i];
        if(l == r){
            ok = 1;
            cout << i << endl;
            return;
        }
    }
    if(!ok) cout << "-1" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}