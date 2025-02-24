#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int m[100][100];
        ll sum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
                sum += m[i][j];
            }
        }

        int a[100] = { 0 }, b[100] = { 0 };
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                a[i] += m[i][j];
                b[j] += m[i][j];
            }
        }

        int smax = 0;
        for (int i = 0; i < n; i++) {
            smax = fmax(smax, a[i]);
            smax = fmax(smax, b[i]);
        }

        cout << 1ll * smax * n - sum << endl;
    }
}