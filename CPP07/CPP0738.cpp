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

        ll cnt = 0;
        while (1) {
            for (int i = 0; i < n; i++) {
                if (a[i] % 2) {
                    a[i] -= 1;
                    cnt++;
                }
            }

            int ok = 1;
            for (int i = 0; i < n; i++) {
                if (a[i])
                    ok = 0;
            }
            if (ok)
                break;

            for (int i = 0; i < n; i++)
                a[i] /= 2;
            cnt++;
        }
        cout << cnt << endl;
    }
}