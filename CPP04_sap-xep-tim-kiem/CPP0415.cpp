#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int Max = 0, Min = 1e9;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            Max = max(Max, x);
        }
        for (int i = 0; i < m; i++) {
            int x;
            cin >> x;
            Min = min(Min, x);
        }
        cout << 1ll * Max * Min << endl;
    }
}
