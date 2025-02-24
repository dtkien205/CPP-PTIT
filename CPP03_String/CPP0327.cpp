#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        ll n = 0;
        for (auto x : s) {
            n = n * 2 + (x - '0');
            n %= 5;
        }
        if(n == 0) cout <<  "Yes" << endl;
        else cout <<  "No" << endl;
    }
}
