#include <bits/stdc++.h>
using namespace std;

void ptich(int n)
{
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            int mu = 0;
            while (n % i == 0) {
                mu++;
                n /= i;
            }
            cout << i << ' ' << mu << ' ';
        }
    }
    if (n != 1)
        cout << n << ' ' << 1;
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ptich(n);
    }
}