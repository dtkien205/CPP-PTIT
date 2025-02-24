#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll F[100];

void ktao()
{
    F[1] = F[2] = 1;
    for (int i = 3; i <= 92; i++) {
        F[i] = F[i - 1] + F[i - 2];
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ktao();
        cout << F[n] << endl;
    }
}