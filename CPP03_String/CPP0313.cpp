#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s1, s2;
    getline(cin, s1);
    cin >> s2;
    stringstream ss(s1);
    string word;
    while (ss >> word) {
        if (word != s2)
            cout << word << ' ';
    }
}
