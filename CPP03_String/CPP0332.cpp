#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string s;
    getline(cin, s);
    vector<string> v;
    for (int i = 0; i < s.size(); i++)
        s[i] = tolower(s[i]);
    stringstream ss(s);
    string word;
    while (ss >> word) {
        v.push_back(word);
    }
    cout << v[v.size() - 1];
    for (int i = 0; i <= v.size() - 2; i++) {
        cout << v[i][0];
    }
    cout << "@ptit.edu.vn";
}
