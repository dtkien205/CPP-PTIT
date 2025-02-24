#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int a[20][20], n, k, cnt = 0;

void Try(int i, int j, int sum)
{
    if (i == n - 1 && j == n - 1 && sum == k)
        cnt++;
    if (i + 1 < n && i >= 0)
        Try(i + 1, j, sum + a[i + 1][j]);
    if (j + 1 < n && j >= 0)
        Try(i, j + 1, sum + a[i][j + 1]);
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        cnt = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> a[i][j];
        Try(0, 0, a[0][0]);
        cout << cnt << endl;
    }
}