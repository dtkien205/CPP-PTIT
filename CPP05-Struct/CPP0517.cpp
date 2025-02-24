#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct NhanVien {
    string name, gender, ns, address, ma, date;
};

void nhap(NhanVien& a)
{
    cin.ignore();
    getline(cin, a.name);
    cin >> a.gender >> a.ns;
    cin.ignore();
    getline(cin, a.address);
    cin >> a.ma >> a.date;
}

void inds(NhanVien a[], int n)
{
    for (int i = 0; i < n; i++) {
        string s = "000";
        if (i + 1 < 10)
            s = s + "0" + to_string(i + 1);
        else
            s += to_string(i + 1);
        cout << s << ' ' << a[i].name << ' ' << a[i].gender << ' ' << a[i].ns << ' ' << a[i].address << ' ' << a[i].ma << ' ' << a[i].date << endl;
    }
}

int main()
{
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        nhap(ds[i]);
    inds(ds, N);
    return 0;
}
