#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct NhanVien {
    string name, gender, ns, address, ma, date, id;
};

int j = 1;

void nhap(NhanVien& a)
{
    cin.ignore();
    getline(cin, a.name);
    cin >> a.gender >> a.ns;
    cin.ignore();
    getline(cin, a.address);
    cin >> a.ma >> a.date;
    string s = to_string(j);
    while (s.size() < 5) {
        s = "0" + s;
    }
    a.id = s;
    j++;
}

void Birthday(string& s)
{
    if (s[2] != '/') {
        s = "0" + s;
    }
    if (s[5] != '/') {
        s.insert(3, "0");
    }
}

void inds(NhanVien a[], int n)
{
    for (int i = 0; i < n; i++) {
        Birthday(a[i].ns);
        cout << a[i].id << ' ' << a[i].name << ' ' << a[i].gender << ' ' << a[i].ns << ' ' << a[i].address << ' ' << a[i].ma << ' ' << a[i].date << endl;
    }
}

int cmp(NhanVien a, NhanVien b)
{
    string s1 = a.ns, s2 = b.ns;
    int d1 = stoi(s1.substr(0, 2)), d2 = stoi(s2.substr(0, 2));
    int m1 = stoi(s1.substr(4, 2)), m2 = stoi(s2.substr(4, 2));
    int y1 = stoi(s1.substr(6)), y2 = stoi(s2.substr(6));
    if (y1 < y2)
        return 1;
    else if (y1 == y2 && m1 < m2)
        return 1;
    else if (y1 == y2 && m1 == m2 && d1 < d2)
        return 1;
    return 0;
}

void sapxep(NhanVien a[], int n)
{
    sort(a, a + n, cmp);
}

int main()
{
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    
    return 0;
}
