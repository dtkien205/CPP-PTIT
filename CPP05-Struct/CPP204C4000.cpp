#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct SinhVien {
    string name, lop, ns;
    double score;
};

void nhapThongTinSV(SinhVien& a)
{
    getline(cin, a.name);
    cin >> a.lop >> a.ns;
    cin >> a.score;
}

void inThongTinSV(SinhVien a)
{
    string s = a.ns;
    if(s[2] != '/'){
        s = "0" + s;
    }
    if(s[5] != '/'){
        s.insert(3, "0");
    }
    cout << "N20DCCN001 " << a.name << ' ' << a.lop << ' ' << s << ' ' << setprecision(2) << fixed << a.score;
}

int main()
{
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
