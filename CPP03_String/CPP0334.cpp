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
        ll sum = 0;
        string tmp = "";
        s += "a";
        for (int i = 0; i < s.size(); i++) {
            if (isdigit(s[i])) {
                tmp += s[i];
            } else {
                if (tmp != "")
                    sum += stoi(tmp);
                tmp = "";
            }
        }
        cout << sum << endl;
    }
}
