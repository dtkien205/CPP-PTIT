#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, k;
    cin >> n >> k;
    long long sum = 0;
    for (int i = 1; i <= n; i++){
        sum += i % k;
    }
    if(sum == k) cout << 1 << endl;
    else cout << 0 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}