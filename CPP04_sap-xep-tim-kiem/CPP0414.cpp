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
        int cnt[10] = { 0 };
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            for (auto x : s)
                cnt[x - '0'] = 1;
        }
        for (int i = 0; i < 10; i++) {
            if (cnt[i])
                cout << i << ' ';
        }
        cout << endl;
    }
}
