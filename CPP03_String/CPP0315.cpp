#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

bool check(string a, string b)
{
    int cnt = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            cnt++;
    }
    return cnt == 2;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int ok = 0;
        string tmp = s;
        while (prev_permutation(s.begin(), s.end())) {
            if (s[0] != 0 && check(s, tmp)) {
                cout << s << endl;
                ok = 1;
                break;
            }
        }
        if (!ok)
            cout << "-1" << endl;
    }
}