#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, m, p;
    cin >> n >> m >> p;
    int a[n + 1][m + 1];
    int b[m + 1][p + 1];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++)
            cin >> b[i][j];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            int c = 0;
            for (int k = 0; k < m; k++)
                c += a[i][k] * b[k][j];
            cout << c << " ";
        }
        cout << endl;
    }
}

int main(){
    solve();
}
