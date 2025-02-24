#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s1, s2, word;
        getline(cin, s1);
        getline(cin, s2);
        set<string> s;

        stringstream ss1(s1);
        while (ss1 >> word)
            s.insert(word);

        stringstream ss2(s2);
        while (ss2 >> word) {
            if (s.count(word)) {
                s.erase(word);
            }
        }
        for (auto x : s)
            cout << x << ' ';
        cout << endl;
    }
}
