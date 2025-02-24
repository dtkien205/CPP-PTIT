#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll check(ll n){
    ll sum = 0, tmp = n;
    for (int i = 1; i <= sqrt(n); i++){
        if (n % i == 0){
            sum += i;
            if(i != n / i) {
                sum += n / i;
            }
        }
    }
    return sum - tmp == tmp;
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