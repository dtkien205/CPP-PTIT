#include <bits/stdc++.h>
using namespace std;

string m101 = "1ABBADCCABDCCABD";
string m102 = "1ACCABCDDBBCDDBB";

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int m;
        cin >> m;
        vector<char> m1;
        vector<char> m2;
        for (int i = 1; i <= 15; i++) {
            char c;
            cin >> c;
            if (m101[i] == c && m == 101)
                m1.push_back(c);
            else if (m102[i] == c && m == 102)
                m2.push_back(c);
        }
        if (m == 101)
            cout << setprecision(2) << fixed << 1.0 * 10 / 15 * m1.size() << endl;
        else
            cout << setprecision(2) << fixed << 1.0 * 10 / 15 * m2.size() << endl;
    }
}