#include <bits/stdc++.h>
using namespace std;
#define ll long long

int prime(int n)
{
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 0;
    }
    return n > 1;
}


int main()
{
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        for (int i = 1; i <= sqrt(n); i++){
            if(prime(i)) cout << i * i << ' ';
        }
        cout << endl;
    }
}