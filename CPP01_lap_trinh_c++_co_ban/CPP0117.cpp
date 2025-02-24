#include <bits/stdc++.h>
using namespace std;

int check(int n)
{
    if (n >= 0 && n <= 9)
        return 1;
    else
        return 0;
}

int tcs(int n)
{
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int res(int n)
{
    int x = tcs(n);
    while (1) {
        if (check(x))
            break;
        else
            x = tcs(x);
    }
    return x;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int s;
        cin >> s;
        cout << res(s) << endl;
    }
}