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
        string tmp = "";
        s += "a";
        int MAX = 0;
        for (int i = 0; i < s.size(); i++) {
            if (isdigit(s[i])) {
                tmp += s[i];
            } else {
                if (tmp != ""){
                    MAX = max(MAX, stoi(tmp));
                }             
                tmp = "";
            }
        }
        cout << MAX << endl;
    }
}
