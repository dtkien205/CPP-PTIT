#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    int a[n + 1][5];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int dem = 0;
        for (int j = 0; j < 3; j++) {
            if (a[i][j] == 1)
                dem++;
        }
        if (dem > 3 - dem)
            cnt++;
    }
    cout << cnt << endl;
}

int main()
{
    solve();
}
