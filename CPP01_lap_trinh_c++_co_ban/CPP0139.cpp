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

int tcs(ll n)
{
    ll sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int ptich(ll n)
{
    ll sum = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            while(n % i == 0){
                sum += tcs(i);
                n /= i;
            }
        }
    }
    if(n != 1) sum += tcs(n);
    return sum;
}

int check(ll n)
{
    if (!isPrime(n) && tcs(n) == ptich(n))
        return 1;
    else
        return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        if(check(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
        // cout << tcs(n) << ' ' << ptich(n) << endl;
        // cout << isPrime(n) << endl;
    }
}