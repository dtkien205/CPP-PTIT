#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int mod = 1e9 + 7;
ll F[1000];
void init()
{
    F[0] = 0;
    F[1] = 1;
    for (int i = 2; i <= 1000; i++)
        F[i] = ((F[i - 1] % mod) + (F[i - 2] % mod)) % mod;
}

int main()
{
    int t;
    cin >> t;
    init();
    while (t--) {
        int n;
        cin >> n;
        cout << F[n] << endl;
    }
}