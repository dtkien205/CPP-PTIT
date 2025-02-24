#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

class SinhVien {
private:
    string msv, name, lop, email;

public:
    string getMSV()
    {
        return msv;
    }

    friend istream& operator>>(istream& in, SinhVien& a)
    {
        in >> a.msv;
        scanf("\n");
        getline(in, a.name);
        in >> a.lop >> a.email;

        return in;
    }

    friend ostream& operator<<(ostream& out, SinhVien a)
    {
        cout << a.msv << ' ' << a.name << ' ' << a.lop << ' ' << a.email << endl;
        return out;
    }
};

bool cmp(SinhVien a, SinhVien b)
{
    return a.getMSV() < b.getMSV();
}

void sapxep(vector<SinhVien> &v)
{
    sort(v.begin(), v.end(), cmp);
}

int main()
{
    vector<SinhVien> v;
    SinhVien a;
    while (cin >> a) {
        v.push_back(a);
    }
    sapxep(v);
    for (auto x : v) {
        cout << x;
    }
}