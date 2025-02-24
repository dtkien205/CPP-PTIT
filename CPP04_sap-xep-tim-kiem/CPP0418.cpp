#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        set<int> hop, giao, tmp;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            hop.insert(x);
            tmp.insert(x);
        }
        for (int i = 0; i < m; i++) {
            int x;
            cin >> x;
            hop.insert(x);
            if (tmp.count(x))
                giao.insert(x);
        }
        for (auto x : hop)
            cout << x << ' ';
        cout << endl;   
        for (auto x : giao)
            cout << x << ' ';
        cout << endl;
    }
}