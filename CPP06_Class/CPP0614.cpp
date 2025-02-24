#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int id = 0;

class NhanVien {
private:
    string name, gt, ns, dc, mst, nkhd;

public:
    friend istream& operator>>(istream& in, NhanVien& a)
    {
        scanf("\n");
        getline(in, a.name);
        in >> a.gt >> a.ns;
        scanf("\n");
        getline(in, a.dc);
        in >> a.mst >> a.nkhd;
        return in;
    }

    friend ostream& operator<<(ostream& out, NhanVien a)
    {
        printf("%05d ", ++id);
        out << a.name << ' ' << a.gt << ' ' << a.ns << ' ' << a.dc << ' ' << a.mst << ' ' << a.nkhd << endl;
        return out;
    }
};

int main()
{
    NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> ds[i];
    for (i = 0; i < N; i++)
        cout << ds[i];
    return 0;
}