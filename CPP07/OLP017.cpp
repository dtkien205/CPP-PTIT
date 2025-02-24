#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

vector<ll> sieve(ll maxn)
{
    vector<bool> is_prime(maxn + 1, true);
    is_prime[0] = is_prime[1] = false;
    
    for (ll i = 2; i * i <= maxn; i++) {
        if (is_prime[i]) {
            for (ll j = i * i; j <= maxn; j += i)
                is_prime[j] = false;
        }
    }
    vector<ll> primes;
    for (ll i = 2; i <= maxn; i++) {
        if (is_prime[i])
            primes.push_back(i);
    }
    return primes;
}

int main()
{
    int t;
    cin >> t;
    vector<ll> prime = sieve(1e7 + 1);
    while (t--) {
        ll n;
        cin >> n;

        for (ll p : prime) {
            if (p * p > n)
                break;
            int count = 0;
            while (n % p == 0) {
                count++;
                n /= p;
            }
            if (count > 0)
                cout << p << " " << count << endl;
        }
        if (n > 1)
            cout << n << " 1" << endl;

        cout << endl;
    }
}