#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        ll sum = 0;
        int cnt[256] = {0};
        for (int i = 0; i < s.size(); i++) {
            if (isdigit(s[i]))
                sum += s[i] - '0';
            else cnt[s[i]]++;
        }
        for (int i = 1; i <= 256; i++){
            if(i >= 'A' && i <= 'Z' && cnt[i]){
                while(cnt[i]--) cout << (char)i;
            }
        }
        cout << sum << endl;
    }
}
