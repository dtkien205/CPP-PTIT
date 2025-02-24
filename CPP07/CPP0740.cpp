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
        vector<int> a(n); 
        for (int i = 0; i < n; i++)
            cin >> a[i];

        ll maxTich = LLONG_MIN; 
        for (int i = 0; i < n; i++) {
            ll tich = 1;
            for (int j = i; j < n; j++) {
                tich *= a[j];
                maxTich = max(maxTich, tich); 
            }
        }
        cout << maxTich << endl;
    }
    return 0;
}
