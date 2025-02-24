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
    ll tu, mau;
};

void rutgon(PhanSo& a)
{
    ll c = GCD(abs(a.tu), abs(a.mau));
    a.tu /= c;
    a.mau /= c;
}

PhanSo tong(PhanSo& a, PhanSo& b)
{
    PhanSo p;
    ll mc = LCM(a.mau, b.mau);
    p.tu = a.tu * (mc / a.mau) + b.tu * (mc / b.mau);
    p.mau = mc;
    rutgon(p);
    return p;
}

PhanSo nhan(PhanSo& a, PhanSo& b){
    PhanSo c;
    c.tu = a.tu * b.tu;
    c.mau = a.mau * b.mau;
    rutgon(c);
    return c;
}

void process(PhanSo a, PhanSo b){
    PhanSo c, d, tmp;
    c = tong(a, b);
    c = nhan(c, c);
    cout << c.tu << '/' << c.mau << ' ';
    tmp = nhan(a, b);
    d = nhan(tmp, c);
    cout << d.tu << '/' << d.mau<< ' ';
    cout << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
