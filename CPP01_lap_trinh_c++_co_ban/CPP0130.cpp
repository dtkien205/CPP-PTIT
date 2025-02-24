#include <bits/stdc++.h>
using namespace std;
#define ll long long

void ptich(ll n)
{
    ll m = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                m = fmax(m, i);
                n /= i;
            }
        }
    }
    if (n != 1) {
        m = max(m, n);
    }
    cout << m << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ptich(n);
    }
}