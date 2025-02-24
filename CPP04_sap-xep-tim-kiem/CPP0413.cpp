#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n + 1];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int b[n + 1], cnt = 0;
        sort(a, a + n);
        for (int i = 0; i <= (n + 1) / 2; i++){
            b[cnt++] = a[n - 1 - i];
            b[cnt++] = a[i];
        }
        for (int i = 0; i < n; i++)
            cout << b[i] << ' ';
        cout << endl;
    }
}
