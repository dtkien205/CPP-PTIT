#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll MOD(string s, ll m)
{
    ll mod = 0;
    for (int i = 0; i < s.size(); i++) {
        mod = (mod * 10 + s[i] - '0') % m;
    }
    return mod;
}



int main()
{
    int t;
    cin >> t;
    while (t--) {
        string s;
        ll m;
        cin >> s >> m;
        cout << MOD(s, m) << endl;
    }
}
