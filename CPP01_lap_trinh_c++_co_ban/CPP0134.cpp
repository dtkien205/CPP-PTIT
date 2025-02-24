#include <bits/stdc++.h>
using namespace std;
#define ll long long

void ptich(ll n, int k)
{
    int a[10001] = {}, cnt = 1;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                a[cnt++] = i;
                n /= i;
            }
        }
    }
    if (n != 1) {
        a[cnt++] = n;
    }
    if(a[k]) cout << a[k] << endl;
    else cout << "-1" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        ptich(n, k);
    }
}