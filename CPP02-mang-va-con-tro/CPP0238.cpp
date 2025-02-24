#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void check(int i, int j)
{
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, m, used[100][100] = { 0 };
        char a[100][100];
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
                if (a[i][j] == 'X') {
                    used[i][j] = 1;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!used[i][j] && a[i][j] == 'O') {

                    used[i - 1][j] = 1;
                    used[i][j + 1] = 1;
                    used[i][j - 1] = 1;
                    used[i + 1][j] = 1;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << used[i][j] << ' ';
            }
            cout << endl;
        }
    }
}