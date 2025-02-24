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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        ll maxSum = a[0], res = a[0];
        for (int i = 1; i < n; i++) {
            maxSum = fmax(maxSum + a[i], a[i]);
            res = max(maxSum, res);
        }
        cout << res << endl;
    }
}