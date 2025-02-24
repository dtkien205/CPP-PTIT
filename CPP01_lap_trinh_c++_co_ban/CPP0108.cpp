#include <bits/stdc++.h>
using namespace std;

int check1(int n)
{
    int d = 10;
    while(n){
        if(d <= n % 10)
            return 0;
        d = n % 10;
        n /= 10;
    }
    return 1;
}

int check2(int n)
{
    int d = -1;
    while(n){
        if(d >= n % 10)
            return 0;
        d = n % 10;
        n /= 10;
    }
    return 1;
}

int prime(int n){
    for (int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return n > 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a = pow(10, n - 1);
        int b = pow(10, n);
        int cnt = 0;
        for (int i = a; i < b; i++) {
            if (check1(i) || check2(i)){
                if(prime(i)) cnt++;
            }
        }
        cout << cnt << endl;
        //cout << endl;
    }
}