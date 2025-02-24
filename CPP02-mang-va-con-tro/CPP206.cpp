#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        v.push_back(x);
    }

    cout << *max_element(v.begin(), v.end()) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
