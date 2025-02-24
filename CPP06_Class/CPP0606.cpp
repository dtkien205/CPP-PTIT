#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

class NhanVien {
private:
    string name, gt, ns, dc, mst, nkhd;

public:
    friend istream& operator>>(istream& in, NhanVien& a)
    {
        getline(in, a.name);
        in >> a.gt >> a.ns;
        getchar();
        getline(in, a.dc);
        in >> a.mst >> a.nkhd;
        if (a.ns[2] != '/')
            a.ns = "0" + a.ns;
        if (a.ns[5] != '/')
            a.ns.insert(3, "0");
        return in;
    }

    friend ostream& operator>>(ostream& out, NhanVien a)
    {
        out << "00001 " << a.name << ' ' << a.gt << ' ' << a.ns << ' ' << a.dc << ' ' << a.mst << ' ' << a.nkhd;
        return out;
    }
};

int main()
{
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}