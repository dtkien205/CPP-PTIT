#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

class SinhVien {
private:
    string name, lop, ns;
    double gpa;

public:
    void nhap()
    {
        getline(cin, name);
        cin >> lop >> ns >> gpa;
        if (ns[2] != '/')
            ns = "0" + ns;
        if (ns[5] != '/')
            ns.insert(3, "0");
    }
    void xuat()
    {
        cout << "B20DCCN001" << ' ' << name << ' ' << lop << ' '<< setprecision(2) << fixed << ns << ' ' << gpa;
    }
};

int main()
{
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}