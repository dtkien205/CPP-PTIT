#include <bits/stdc++.h>
using namespace std;
#define ll long long

int check(string s)
{
    int l = 0, r = s.size() - 1;
    while (l <= r) {
        if (s[l] != s[r])
            return 0;
        l++;
        r--;
    }
    for (int i = 0; i < s.size(); i++) {
        if ((s[i] - '0') % 2)
            return 0;
    }
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if(check(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
