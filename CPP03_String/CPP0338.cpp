#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int k;
        string s;
        cin >> s >> k;
        int res = 0;
        for (int i = 0; i < s.size(); i++) {
            int dem = 0, cnt[26] = { 0 };
            for (int j = i; j < s.size(); j++) {
                if (cnt[s[j] - 'a'] == 0)
                    dem++;

                cnt[s[j] - 'a']++;

                if (dem == k)
                    res++;
                if (dem > k)
                    break;
            }
        }
        cout << res << endl;
    }
}