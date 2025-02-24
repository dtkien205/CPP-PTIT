#include <bits/stdc++.h>
using namespace std;
#define ll long long

void chuanHoa(string& s)
{
    for (int i = 0; i < s.size(); i++)
        s[i] = tolower(s[i]);
}

map<string, int> mp;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        string word;
        stringstream ss(s);
        vector<string> v;
        while (ss >> word) {
            chuanHoa(word);
            v.push_back(word);
        }
        string tmp = "";
        tmp += v[v.size() - 1];
        for (int i = 0; i < v.size() - 1; i++) {
            tmp += v[i][0];
        }
        mp[tmp]++;
        int ok = 0;
        // cout << "@ptit.edu.vn" << endl;
        if (mp[tmp] >= 2) {
            tmp += to_string(mp[tmp]);
        }
        tmp += "@ptit.edu.vn";
        cout << tmp << endl;
    }
    // for (auto x : mp)
    //     cout << x.first << " " << x.second << endl;
}
