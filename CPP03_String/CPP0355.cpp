#include <bits/stdc++.h>
using namespace std;
#define ll long long

void inThuong(string& s)
{
    for (int i = 0; i < s.size(); i++)
        s[i] = tolower(s[i]);
}

int isEnd(string s)
{
    char i = s[s.size() - 1];
    if (i == '.' || i == '!' || i == '?')
        return 1;
    else
        return 0;
}

int main()
{
    string s;
    vector<string> v;
    while (cin >> s) {
        inThuong(s);
        v.push_back(s);
    }
    int start = 1;
    for (auto x : v) {
        if (start) {
            x[0] = toupper(x[0]);
            start = 0;
        }
        if (isEnd(x)) {
            x.pop_back();
            start = 1;
            cout << x << endl;
        } else
            cout << x << ' ';
    }
}
