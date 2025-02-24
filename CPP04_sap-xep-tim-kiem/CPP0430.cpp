#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        set<int> s;
        ll Min = 1e9, Max = 0;
        for (int i = 0; i < n; i++) {
            ll x;
            cin >> x;
            Min = min(Min, x);
            Max = max(Max, x);
            s.insert(x);
        }
        int num = Max - Min + 1;
        cout << num - s.size();
        cout << endl;
    }
}