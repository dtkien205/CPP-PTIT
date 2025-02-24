#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n + 1][m + 1], b[4][4];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                cin >> a[i][j];
        }
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++)
                cin >> b[i][j];
        }
        ll sum = 0;
        for (int i = 0; i <= n - 3; i++) {
            for (int j = 0; j <= m - 3; j++) {
                ll tmp = 0;
                for (int k = 0; k < 3; k++) {
                    for (int l = 0; l < 3; l++) {
                        tmp += 1ll * a[i + k][j + l] * b[k][l];
                    }
                }
                sum += tmp;
            }
        }
        cout << sum << endl;
    }
}