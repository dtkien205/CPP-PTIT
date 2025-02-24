#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    int m = 4 * n;
    int a[m][m], cnt = 1;
    vector<int> v1, v2;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++)
            a[i][j] = cnt++;
    }
    int h1 = 0, h2 = m - 1, c1 = 0, c2 = m - 1;
    while (h1 <= h2 && c1 <= c2) {
        for (int i = h1; i <= h2; i++) {
            v1.push_back(a[i][c1]);
        }
        c1++;
        c2--;
        for (int i = c1; i <= c2; i++) {
            v1.push_back(a[h2][i]);
        }
        h2--;
        h1++;
        if (h1 <= h2) {
            for (int i = h2; i >= h1; i--) {
                v1.push_back(a[i][c2]);
            }
            c2--;
            c1++;
        }
        if (c1 <= c2) {
            for (int i = c2; i >= c1; i--) {
                v1.push_back(a[h1][i]);
            }
            h1++;
            h2--;
        }
    }
    h1 = 0, h2 = m - 1, c1 = 0, c2 = m - 1;
    while (h1 <= h2 && c1 <= c2) {
        for (int i = h2; i >= h1; i--) {
            v2.push_back(a[i][c2]);
        }
        c2--;
        c1++;
        for (int i = c2; i >= c1; i--) {
            v2.push_back(a[h1][i]);
        }
        h1++;
        h2--;
        if (h1 <= h2) {
            for (int i = h1; i <= h2; i++) {
                v2.push_back(a[i][c1]);
            }
            c1++;
            c2--;
        }
        if (c1 <= c2) {
            for (int i = c1; i <= c2; i++) {
                v2.push_back(a[h2][i]);
            }
            h1++;
            h2--;
        }
    }
    for (int i = v2.size() - 1; i >= 0; i--)
        cout << v2[i] << ' ';
    cout << endl;
    for (int i = v1.size() - 1; i >= 0; i--)
        cout << v1[i] << ' ';
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}