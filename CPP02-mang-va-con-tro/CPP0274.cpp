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
        int cnt[1000001] = { 0 };
        for (int i = 1; i <= n; i++) {
            int x; cin >> x;
            cnt[x]++;
        }
        int ans = 0;
        for (int i = 0; i <= 1000000; i++){
            if(cnt[i] != 1)
                ans += cnt[i];
        }

        cout << ans << endl;
    }
}
