#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int mod = 1e9 + 7;
ll c[1005][1005];

void init()
{
    for (int i = 0; i <= 1000; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i)
                c[i][j] = 1;
            else
                c[i][j] = (c[i - 1][j - 1] + c[i - 1][j]) % mod;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    init();
    while (t--) {
        int n, r;
        cin >> n >> r;
        cout << c[n][r] % mod << endl;
    }
}