#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll c(int n)
{
    return 1ll * n * (n - 1) / 2;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        ll cnt = s.size();
        int d[27] = {};
        for (int i = 0; i < s.size(); i++){
            d[s[i] - 'a']++;
        }
        for (int i = 0; i <= 26; i++){
            if(d[i] >= 2){
                cnt += c(d[i]);
                // cout << i << ' ' << d[i] << endl;
            }
        }
        cout << cnt << endl;
    }
}
