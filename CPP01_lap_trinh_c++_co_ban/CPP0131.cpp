#include <bits/stdc++.h>
using namespace std;

const int maxn = 10000001;
int p[maxn];

void sang()
{
    for (int i = 0; i < maxn; i++)
        p[i] = 0;
    p[1] = 1;
    for (int i = 2; i <= sqrt(maxn); i++) {
        if (p[i] == 0) {
            for (int j = i; j < maxn; j += i) {
                if (p[j] == 0)
                    p[j] = i;
            }
        }
    }
    for (int i = 0; i < maxn; i++) {
        if (p[i] == 0)
            p[i] = i;
    }
}

int main()
{
    int t;
    cin >> t;
    sang();
    while (t--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cout << p[i] << ' ';
        }
        cout << endl;
    }
}
