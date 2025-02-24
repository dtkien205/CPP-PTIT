#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int id = 1;

class NhanVien {
private:
    string ID, name, gt, ns, dc, mst, nkhd;

public:
    string m, d, y;

    friend istream& operator>>(istream& in, NhanVien& a)
    {
        scanf("\n");
        getline(in, a.name);
        in >> a.gt >> a.ns;
        scanf("\n");
        getline(in, a.dc);
        in >> a.mst >> a.nkhd;

        a.ID = "000";
        if (id < 10)
            a.ID += "0" + to_string(id);
        else
            a.ID += to_string(id);
        ++id;

        a.m = stoi(a.ns.substr(0, 2));
        a.d = stoi(a.ns.substr(3, 2));
        a.y = stoi(a.ns.substr(6));

        return in;
    }

    friend ostream& operator<<(ostream& out, NhanVien a)
    {
        out << a.ID << ' ' << a.name << ' ' << a.gt << ' ' << a.ns << ' ' << a.dc << ' ' << a.mst << ' ' << a.nkhd << endl;
        return out;
    }
};

bool cmp(NhanVien a, NhanVien b)
{
    if (a.y < b.y)
        return 1;
    else if (a.y == b.y && a.m < b.m)
        return 1;
    else if (a.y == b.y && a.m == b.m && a.d < b.d)
        return 1;
    else return 0;
}

void sapxep(NhanVien ds[], int n)
{
    sort(ds, ds + n, cmp);
}

int main()
{
    NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> ds[i];
    sapxep(ds, N);
    for (i = 0; i < N; i++)
        cout << ds[i];
    return 0;
}