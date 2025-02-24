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
        int cnt = 1;
        s += "1";
        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == s[i + 1]) {
                cnt++;
            } else {
                cout << s[i] << cnt;
                cnt = 1;
            }
        }
        cout << endl;
    }
}
