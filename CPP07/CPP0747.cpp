#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int cnt = 0, x;
        while ((x = s.find("100")) != string::npos) {
            s.erase(x, 3);
            cnt += 3;
        }
        if (cnt == 0)
            cout << endl;
        else
            cout << cnt << endl;
    }
}