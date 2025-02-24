#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct NhanVien {
    string name, gender, ns, address, ma, date, mnv = "00001";
};

void nhap(NhanVien& a)
{
    getline(cin, a.name);
    cin >> a.gender >> a.ns;
    cin.ignore();
    getline(cin, a.address);
    cin >> a.ma >> a.date;
}

void in(NhanVien a)
{
    cout << a.mnv << ' ' << a.name << ' ' << a.gender << ' ' << a.ns << ' ' << a.address << ' ' << a.ma << ' ' << a.date;
}

int main()
{
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
