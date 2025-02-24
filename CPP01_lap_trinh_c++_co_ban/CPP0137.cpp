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

int cp(ll n){
    return sqrt(n) * sqrt(n) == n;
}

int check(ll l, ll r)
{
    int cnt = 0;
    if(cp(l)) l = sqrt(l);
    else l = sqrt(l) + 1;
    r = sqrt(r);
    for (int i = l; i <= r; i++) {
        if (isPrime(i))
            cnt++;
    }
    return cnt;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll l, r;
        cin >> l >> r;
        if (l > r)
            swap(l, r);
        cout << check(l, r) << endl;
    }
}