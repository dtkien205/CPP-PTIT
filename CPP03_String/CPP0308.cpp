    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long

    void solve()
    {
        string s;
        cin >> s;
        int cnt[1000] = {};
        for (int i = 0; i < s.size(); i++) {
            cnt[s[i]]++;
        }
        for (int i = 0; i < s.size(); i++) {
            if (cnt[s[i]] == 1)
                cout << s[i];
        }
        cout << endl;
    }

    int main()
    {
        int t;
        cin >> t;
        while (t--) {
            solve();
        }
    }
