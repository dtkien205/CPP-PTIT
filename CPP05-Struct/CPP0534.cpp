#include <bits/stdc++.h>
using namespace std;
#define ll long long

int checkTN(string s)
{
    int n = s.size();
    if (n == 1)
        return 0;
    int l = 0, r = n - 1;
    while (l <= r) {
        if (s[l] != s[r])
            return 0;
        l++;
        r--;
    }
    return 1;
}

int cmp(pair<string, int> a, pair<string, int> b)
{
    if (a.first.size() > b.first.size())
        return 1;
    else if (a.first.size() == b.first.size() && a.first > b.first)
        return 1;
    return 0;
}

int main()
{
    map<string, int> mp;
    string s;
    while (cin >> s) {
        if (checkTN(s))
            mp[s]++;
    }
    vector<pair<string, int>> v;
    for (auto x : mp)
        v.push_back(make_pair(x.first, x.second));
    sort(v.begin(), v.end(), cmp);
    for (auto x : v) {
        cout << x.first << ' ' << x.second << endl;
    }
}
