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
        int k;
        cin >> k;
        int d[26] = {};
        for (int i = 0; i < s.size(); i++)
            d[s[i] - 'a'] = 1;
        int cnt = 0;
        for (int i = 0; i <= 26; i++) {
            if (d[i] == 0)
                cnt++;
        }
        if (s.size() >= 26 && k >= cnt)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
}
