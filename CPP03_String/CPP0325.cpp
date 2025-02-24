#include <bits/stdc++.h>
using namespace std;
#define ll long long

int check(string s)
{
    ll sum1 = 0, sum2 = 0;
    for (int i = 0; i < s.size(); i += 2)
        sum1 += s[i] - '0';
    for (int i = 1; i < s.size(); i += 2)
        sum2 += s[i] - '0';
    return abs(sum1 - sum2) % 11 == 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << check(s) << endl;
    }
}
