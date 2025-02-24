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
        set<char> st;
        int ans = INT_MAX;

        for (int i = 0; i < s.size(); i++)
            st.insert(s[i]);

        for (int i = 0; i < s.size(); i++) {
            int cnt = 0, used[256] = { 0 };
            string str = "";

            for (int j = i; j < s.size(); j++) {
                if (!used[s[j]]) {
                    used[s[j]] = 1;
                    cnt++;
                }
                str += s[j];

                if (cnt == st.size()) {
                    ans = fmin(ans, str.size());
                    break;
                }
            }
        }
        cout << ans << endl;
    }
}