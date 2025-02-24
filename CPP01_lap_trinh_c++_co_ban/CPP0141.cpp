#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector <ll> F(1000001, 0);

int ktao(ll n)
{
    F[1] = F[2] = 1;
    for (int i = 3; i <= F.size(); i++) {
        F[i] = F[i - 1] + F[i - 2];
        if (F[i] >= n) {
            if (F[i] == n)
                return 1;
            else if (F[i] > n)
                return 0;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        if (ktao(n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    // for (auto x : F) cout << x << ' ';
}