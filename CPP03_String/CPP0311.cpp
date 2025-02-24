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
        int ok = 0;
        int d[256] = {}, MAX = 0;
        for (int i = 0; i < s.size(); i++) {
            d[s[i]]++;
            MAX = max(MAX, d[s[i]]);
        }
        // for (int i = 1; i <= 256; i++){
        //     if(d[i]) cout << (char)i <<' ' <<d[i] << endl;
        // }
        // cout << MAX << endl;
        if(MAX > (s.size() + 1) / 2) cout << 0 << endl;
        else cout << 1 << endl;
    }
}
