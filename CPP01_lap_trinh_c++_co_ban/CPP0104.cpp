#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gt(int  n){
    ll tich = 1;
    for (int i = 1; i <= n; i++)
        tich *= i;
    return tich;
}

int main()
{
    int n; cin >> n;
    ll sum = 0;
    for (int i = 1; i <= n; i++){
        sum += gt(i);
    }
    cout << sum;
}