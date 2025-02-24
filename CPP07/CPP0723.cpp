#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

string giaiThua(char s)
{
    if (s == '1' || s == '0')
        return "1";
    else if (s == '2')
        return "2";
    else if (s == '3')
        return "3";
    else if (s == '4')
        return "322";
    else if (s == '5')
        return "5";
    else if (s == '6')
        return "53";
    else if (s == '7')
        return "7";
    else if (s == '8')
        return "7222";
    else if (s == '9')
        return "7332";
}

int cmp(char a, char b)
{
    return a > b;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        string tmp = "";
        for (int i = 0; i < s.size(); i++) {
            tmp += giaiThua(s[i]);
        }
        sort(tmp.begin(), tmp.end(), cmp);
        for (int i = 0; i < tmp.size(); i++) {
            if (tmp[i] != '1')
                cout << tmp[i];
        }
        cout << endl;
    }
}