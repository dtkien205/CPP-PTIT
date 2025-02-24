#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n; cin >> n;
    double sum = 0;
    for (int i = 1; i <= n; i++){
        sum += 1.0 / i;
    }
    cout << setprecision(4) << fixed << sum;
}