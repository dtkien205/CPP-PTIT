#include <bits/stdc++.h>
using namespace std;
#define ll long long

int isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return n > 1;
}

ll gcd(ll a, ll b)
{
    while (b) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a + b;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        int cnt = 0;
        for (int i = 1; i <= x; i++) {
            if (gcd(x, i) == 1)
                cnt++;
        }
        if(isPrime(cnt)) cout << 1 << endl;
        else cout << 0 << endl;
    }
}