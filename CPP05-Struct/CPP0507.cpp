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

ll LCM(ll a, ll b)
{
    return a / GCD(a, b) * b;
}

struct PhanSo {
    ll t, m;
};

void nhap(PhanSo& a)
{
    cin >> a.t >> a.m;
}

PhanSo tong(PhanSo& a, PhanSo& b)
{
    PhanSo p;
    ll mc = LCM(b.m, a.m);
    a.t *= mc / a.m;
    b.t *= mc / b.m;
    p.t = a.t + b.t;
    p.m = mc;
    return p;
}

void in(PhanSo a)
{
    ll c = GCD(a.t, a.m);
    a.t /= c;
    a.m /= c;
    cout << a.t << '/' << a.m;
}

int main()
{
    struct PhanSo p, q;
    nhap(p);
    nhap(q);
    PhanSo t = tong(p, q);
    in(t);
    return 0;
}
