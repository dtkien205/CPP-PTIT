#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

string sum(string& a, string& b)
{
    if (a.size() > b.size())
        b.insert(0, a.size() - b.size(), '0');
    else
        a.insert(0, b.size() - a.size(), '0');

    string res = "";
    int nho = 0;
    for (int i = a.size() - 1; i >= 0; i--) {
        nho = a[i] - '0' + b[i] - '0' + nho;
        res.insert(0, 1, nho % 10 + '0');
        nho /= 10;
    }
    if (nho > 0)
        res.insert(0, 1, nho + '0');

    return res;
}

string mul(char a, string b)
{
    string res = "";
    int nho = 0;
    for (int i = b.size() - 1; i >= 0; i--) {
        nho = (a - '0') * (b[i] - '0') + nho;
        res.insert(0, 1, nho % 10 + '0');
        nho /= 10;
    }
    if (nho > 0)
        res.insert(0, 1, nho + '0');
    return res;
}

void testCase()
{
    string a, b;
    cin >> a >> b;

    int n = a.size();
    string s, res = "";

    for (int i = n - 1; i >= 0; i--) {
        s = mul(a[i], b);
        s.insert(s.size(), n - i - 1, '0');
        res = sum(res, s);
    }
    cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        testCase();
    }
}