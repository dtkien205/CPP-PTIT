#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<ll, ll> d;
        for (int i = 0; i < n; i++) {
            ll x;
            cin >> x;
            d[x] = 1;
        }
        for (int i = 0; i < n; i++) {
            if (d[i])
                cout << i << ' ';
            else
                cout << "-1" << ' ';
        }
        cout << endl;
    }
}