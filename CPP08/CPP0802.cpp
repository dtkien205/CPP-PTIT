#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int check(string s)
{
    if (s.size() >= 10)
        return 0;
    for (int i = 0; i < s.size(); i++) {
        if (!isdigit(s[i]))
            return 0;
    }
    return 1;
}

int main()
{
    ifstream in;
    in.open("DATA.in");

    ll sum = 0;
    string s;
    while (in >> s) {
        if (check(s))
            sum += stoll(s);
    }

    cout << sum << endl;

    in.close();
}