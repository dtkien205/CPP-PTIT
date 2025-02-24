#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{

    int n;
    cin >> n;
    int a[100][100];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    int m;
    cin >> m;
    int b[100][100];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < m; j++)
            cin >> b[i][j];

    for (int i = 0; i <= n - m; i += m) {
        for (int j = 0; j <= n - m; j += m) {
            for (int k = 0; k < m; k++) {
                for (int l = 0; l < m; l++) {
                    a[i + k][j + l] *= b[k][l];
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
}