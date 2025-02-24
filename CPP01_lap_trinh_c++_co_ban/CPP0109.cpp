#include <bits/stdc++.h>
using namespace std;

int check(int n)
{
    string s = to_string(n);
    int c = 0, l = 0;
    for (int i = 0; i < s.size(); i++) {
        if ((s[i] - '0') % 2 == 0)
            c++;
    }
    return c == s.size() - c;
}

int main()
{
    int n;
    cin >> n;
    int a = pow(10, n - 1);
    int b = pow(10, n);
    int cnt = 0;
    for (int i = a; i < b; i++) {
        if (check(i)) {
            cout << i << ' ';
            cnt++;
            if(cnt % 10 == 0) cout << endl;
        }
    }
}