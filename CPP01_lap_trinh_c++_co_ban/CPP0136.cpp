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

int check(ll n){
    int cnt = 0;
    for (int i = 2; i <= sqrt(n); i++){
        if(isPrime(i)) cnt++;
    }
    return cnt;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll n; cin >> n;
        cout << check(n) << endl;
    }
}