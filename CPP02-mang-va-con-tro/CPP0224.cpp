#include <bits/stdc++.h>
using namespace std;
#define ll long long

int dx[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int dy[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
int a[200][200];
int n, m;

void loang(int i, int j)
{
    a[i][j] = 0;
    for (int k = 0; k < 8; k++) {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == 1) {
            loang(i1, j1);
        }
    }
}

void solve()
{
    cin >> n >> m;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == 1) {
                loang(i, j);
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}