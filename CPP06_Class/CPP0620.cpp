#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

class SinhVien {
private:
    string msv, name, lop, email;

public:
    string getLOP()
    {
        return lop;
    }

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
    if (a.getLOP() != b.getLOP())
        return a.getLOP() < b.getLOP();
    else
        return a.getMSV() < b.getMSV();
}

void sapxep(SinhVien ds[], int n)
{
    sort(ds, ds + n, cmp);
}

int main()
{
    int n;
    cin >> n;
    SinhVien ds[1001];
    for (int i = 0; i < n; i++)
        cin >> ds[i];
    sapxep(ds, n);
    for (int i = 0; i < n; i++)
        cout << ds[i];
    return 0;
}