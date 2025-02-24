#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (auto& x : a) 
        cin >> x;
    int uc = a[0];
    for (auto x : a){
        uc = __gcd(uc, x);
    }
    ll tich = 1;
    for (auto x : a){
        for (int i = 0; i < uc; i++){
            tich *= x;
            tich %= mod;
        }
    }
    cout << tich << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}