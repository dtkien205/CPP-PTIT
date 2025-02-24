#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

class PhanSo {
private:
    ll t, m;

public:
    PhanSo(ll tu = 0, ll mau = 1)
    {
        this->t = tu;
        this->m = mau;
    }
    friend istream& operator>>(istream& in, PhanSo& a)
    {
        in >> a.t >> a.m;
        return in;
    }
    friend ostream& operator<<(ostream& out, PhanSo a)
    {
        out << a.t << '/' << a.m;
        return out;
    }
    void rutgon()
    {
        ll uc = __gcd(t, m);
        t /= uc;
        m /= uc;
    }
    PhanSo operator+(PhanSo b)
    {
        PhanSo A;
        A.t = t * b.m + b.t * m;
        A.m = m * b.m;
        A.rutgon();
        return A;
    }
};

int main()
{
    PhanSo p(1, 1), q(1, 1);
    cin >> p >> q;
    cout << p + q;
    return 0;
}