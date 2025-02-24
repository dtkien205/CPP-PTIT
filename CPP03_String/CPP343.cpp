#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        vector<int> even, odd;
        stringstream ss(s);
        string tmp;
        while (ss >> tmp) {
            int x = stoi(tmp);
            if (x % 2 == 0)
                even.push_back(x);
            else
                odd.push_back(x);
        }
        int c = even.size();
        int l = odd.size();
        if ((c + l) % 2 == 0 && c > l || (c + l) % 2 == 1 && l > c)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
