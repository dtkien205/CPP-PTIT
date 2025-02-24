#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct SinhVien {
    string ten, lop, ns;
    float diem;
};

void nhap(SinhVien& a)
{
    getline(cin, a.ten);
    cin >> a.lop >> a.ns >> a.diem;
}

void in(SinhVien a)
{
    string s = a.ns;
    if(s[2] != '/'){
        s = "0" + s;
    }
    if(s[5] != '/'){
        s.insert(3, "0");
    }
    cout << "B20DCCN001" << ' ' << a.ten << ' ' << a.lop << ' ' << s << ' ' << setprecision(2) << fixed << a.diem;
}

int main()
{
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
