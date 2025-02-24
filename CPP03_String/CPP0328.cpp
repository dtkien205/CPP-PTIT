#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int Dem(string s, int x)
{
    ll cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        int n = 0;
        for (int j = i; j < s.size(); j++) {
            n = n * 10 + (s[j] - '0');
            n %= x;
            if (!n)
                cnt++;
        }
    }
    return cnt;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        string s; cin >> s;
        cout << Dem(s, 8) - Dem(s, 24) << endl;
    }
}