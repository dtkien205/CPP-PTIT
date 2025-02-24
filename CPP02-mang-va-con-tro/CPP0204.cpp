#include <bits/stdc++.h>
using namespace std;
#define ll long long

int isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return n > 1;
}

void solve()
{
    int l, r;
    cin >> l >> r;
    int cnt = 0;
    for (int i = l; i <= r; i++) {
        if (isPrime(i))
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
