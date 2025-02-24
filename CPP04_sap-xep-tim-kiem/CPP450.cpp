#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    set<int> s;
    int a[n + 1];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    s.insert(a[0]);
    for (int i = 1; i < n; i++) {
        if(s.count(a[i])){
            cout << a[i] << endl;
            return;
        }
        else s.insert(a[i]);
    }
    if(n == s.size()) cout << "-1" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
