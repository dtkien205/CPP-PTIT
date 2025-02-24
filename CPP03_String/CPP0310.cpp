#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll solve(ll n, int a, int b)
{
    string s = to_string(n);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] - '0' == a) {
            s[i] = b + '0';
        }
    }
    return stoll(s);
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll x1, x2;
        cin >> x1 >> x2;
        cout << solve(x1, 6, 5) + solve(x2, 6, 5) << ' ' << solve(x1, 5, 6) + solve(x2, 5, 6) << endl;
        // cout << solve(x1, 5 , 6) << ' ' << solve(x1, 6, 5) << endl;
    }
}
