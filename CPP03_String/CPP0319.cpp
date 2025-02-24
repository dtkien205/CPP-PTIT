#include <bits/stdc++.h>
using namespace std;
#define ll long long

string MIN(int m, int s)
{
    string res = "";
    s -= 1;
    for (int i = 0; i < m - 1; i++) {
        if (s >= 9) {
            res += "9";
            s -= 9;
        } else {
            res = to_string(s) + res;
            s = 0;
        }
    }
    s++;
    res = to_string(s) + res;
    return res;
}

string MAX(int m, int s)
{
    string res = "";
    for (int i = 0; i < m; i++) {
        if (s >= 9) {
            res += "9";
            s -= 9;
        } else {
            res += to_string(s);
            s = 0;
        }
    }
    return res;
}

int main()
{
    int m, s;
    cin >> m >> s;
    if (s > m * 9)
        cout << -1;
    else
        cout << MIN(m, s) << ' ' << MAX(m, s);
}
