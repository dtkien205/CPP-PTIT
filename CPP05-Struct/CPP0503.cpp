#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll GCD(ll a, ll b)
{
    while (b) {
        ll r = a % b;
        a = b;
        b = r;
    }
    return a + b;
}

struct PhanSo {
    ll t, m;
};

void nhap(PhanSo& a)
{
    cin >> a.t >> a.m;
}

void rutgon(PhanSo& a){
    ll mc = GCD(a.t, a.m);
    a.t /= mc;
    a.m /= mc;
}

void in(PhanSo a)
{
    cout << a.t << '/' << a.m;
}

int main()
{
    struct PhanSo p;
    nhap(p);
    rutgon(p);
    in(p);
    return 0;
}
