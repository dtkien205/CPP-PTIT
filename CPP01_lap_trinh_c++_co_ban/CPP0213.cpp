#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll F[105];
vector <bool> v(1001, 0);

void ktao()
{
    F[1] = F[2] = 1;
    v[0] = v[1] = 1;
    for (int i = 3; i <= 20; i++) {
        F[i] = F[i - 1] + F[i - 2];
        v[F[i]] = 1;
    }
}


int main()
{
    int t;
    cin >> t;
    ktao();
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (v[x])
                cout << x << ' ';
        }
        cout << endl;
    }
}