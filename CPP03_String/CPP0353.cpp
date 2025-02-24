#include <bits/stdc++.h>
using namespace std;
#define ll long long

int tn(string s)
{
    int l = 0, r = s.size() - 1;
    while (l <= r) {
        if (s[l] != s[r])
            return 0;
        l++;
        r--;
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
        string tmp = "";
        for (int i = 0; i < s.size(); i++) {
            s[i] = tolower(s[i]);
            if (s[i] == 'a' || s[i] == 'b' || s[i] == 'c')
                tmp += '2';
            else if (s[i] == 'd' || s[i] == 'e' || s[i] == 'f')
                tmp += '3';
            else if (s[i] == 'g' || s[i] == 'h' || s[i] == 'i')
                tmp += '4';
            else if (s[i] == 'j' || s[i] == 'k' || s[i] == 'l')
                tmp += '5';
            else if (s[i] == 'm' || s[i] == 'n' || s[i] == 'o')
                tmp += '6';
            else if (s[i] == 'p' || s[i] == 'q' || s[i] == 'r' || s[i] == 's')
                tmp += '7';
            else if (s[i] == 't' || s[i] == 'u' || s[i] == 'v')
                tmp += '8';
            else if (s[i] == 'w' || s[i] == 'x' || s[i] == 'y' || s[i] == 'z')
                tmp += '9';
        }
        if (tn(tmp))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
