#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

class PhanSo {
private:
    ll t, m;

public:
    PhanSo(ll tu, ll mau)
    {
        this->t = tu;
        this->m = mau;
    }

    void rutgon()
    {
        ll uc = __gcd(t, m);
        t /= uc;
        m /= uc;
    }

    friend istream& operator>>(istream& in, PhanSo& a)
    {
        in >> a.t >> a.m;
        return in;
    }

    friend ostream& operator<<(ostream& out, PhanSo& a)
    {
        out << a.t << '/' << a.m;
        return out;
    }
};

int main()
{
    PhanSo p(1, 1);
    cin >> p;
    p.rutgon();
    cout << p;
    return 0;
}