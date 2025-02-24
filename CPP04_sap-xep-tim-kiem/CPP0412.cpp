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
        int cnt[3] = {0};
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            cnt[x]++;
        }
        for (int i = 0; i <= 2; i++) {
            if (cnt[i]) {
                while (cnt[i]--)
                    cout << i << ' ';
                // cout << i << ' ' << cnt[i] << endl;
            }
        }
        cout << endl;
    }
}
