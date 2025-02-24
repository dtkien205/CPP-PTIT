#include <bits/stdc++.h>
using namespace std;

int prime(int n)
{
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return n > 1;
}

void solve()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n / 2; i++) {
        if (prime(i) && prime(n - i)) {
            cout << i << ' ' << n - i << endl;
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