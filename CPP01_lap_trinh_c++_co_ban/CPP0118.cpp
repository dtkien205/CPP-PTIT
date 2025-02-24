#include <bits/stdc++.h>
using namespace std;

int ptich(int n)
{
    int cnt = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cnt++;
            int mu = 0;
            while (n % i == 0) {
                mu++;
                n /= i;
            }
            if (mu > 1)
                return 0;
        }
    }
    if (n != 1)
        cnt++;
    if (cnt == 3)
        return 1;
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;
        if(ptich(n)) cout << 1;
        else cout << 0;
        cout << endl;
    }
}