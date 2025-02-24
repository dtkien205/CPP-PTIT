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
        sort(a, a + n);
        int Min = 1e9;
        for (int i = 0; i < n - 1; i++)
            Min = min(Min, a[i + 1] - a[i]);
        cout << Min << endl;
    }
}