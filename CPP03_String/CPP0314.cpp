#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    set<string> se;
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        se.insert(s);
    }
    cout << se.size() << endl;
    // for (auto x : se) cout << x << endl;
}
